#include <vector>
#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        else if (numbers[i] >= 'a' && numbers[i] <= 'z') {
            temp += numbers[i];
            if ((i + 1) == numbers.length() || !isalpha(numbers[i + 1])) {
                numVector.push_back(temp);
                temp = "";
            }
        }
    }

    sort(numVector.begin(), numVector.end());
    string result = "";

    for (int i = 0; i < numVector.size(); i++) {
        result += numVector[i];
        if (i != numVector.size() - 1) {
            result += " ";
        }
    }

    return result;
}