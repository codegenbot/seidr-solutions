#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    string result = "";
    map<string, int> numMap;
    for (int i = 0; i <= 9; i++) {
        char ch = '0' + i;
        if (i == 0)
            numMap["zero"] = i;
        else
            numMap[string(1, ch)] = i;
    }
    
    string nums[numbers.size()];
    int index = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            index++;
            continue;
        }
        int j = i + 1;
        while (j <= numbers.size() && numbers[j] != ' ')
            j++;
        string str = numbers.substr(i, j - i - 1);
        nums[index++] = str;
    }
    
    sort(nums, nums + index);
    for (int i = 0; i < index; i++)
        result += nums[i] + " ";
    return result.substr(0, result.size() - 1);
}