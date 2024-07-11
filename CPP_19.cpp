#include <algorithm>
#include <string>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};

    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (auto it = numMap.begin(); it != numMap.end(); it++) {
            if (it->first.find(numbers.substr(i, string::npos)) != string::npos) {
                temp = it->first;
                i += temp.length();
                break;
            }
        }
        numVec.push_back(temp);
    }

    sort(numVec.begin(), numVec.end());

    string result;
    for (auto str : numVec) {
        result += str + " ";
    }

    return result.substr(0, result.length() - 1);
}