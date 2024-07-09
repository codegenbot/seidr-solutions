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
        temp += numbers[i];
        for (auto it = numMap.begin(); it != numMap.end(); it++) {
            if (temp == it->first) {
                numVec.push_back(temp);
                temp = "";
                break;
            }
        }
    }

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (int i = 0; i < numVec.size(); i++) {
        result += numVec[i];
        if (i != numVec.size() - 1) {
            result += " ";
        }
    }

    return result;
}