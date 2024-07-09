#include <algorithm>
#include <string>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};

    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (auto it = numMap.begin(); it != numMap.end(); it++) {
            if (it->first.find(numbers.substr(i, numbers.find(' ', i) - i)) != string::npos) {
                temp = it->first;
                break;
            }
        }
        numVector.push_back(temp);
    }

    sort(numVector.begin(), numVector.end());

    string result = "";
    for (auto &num : numVector) {
        result += num + " ";
    }

    return result;
}