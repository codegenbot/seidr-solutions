#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    map<string, int> numberMap;

    for (int i = 0; i <= 9; i++) {
        if (i == 0)
            numberMap["zero"] = i;
        else
            numberMap[to_string(i)] = i;
        if (i < 7) {
            string str = to_string(i);
            while (str.length() < 3) {
                str = "0" + str;
            }
            numberMap[str] = i;
        }
    }

    string[] nums = numbers.split(' ');
    for (int i = 0; i < nums.length; i++) {
        numVec.add(nums[i]);
    }
    sort(numVec);
    return join(numVec, " ");
}