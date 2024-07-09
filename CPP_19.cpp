#include<stdio.h>
#include<string>
#include<map>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp += numbers[i];
        for (int j = i + 1; j < numbers.size(); j++) {
            if (numbers[j] != ' ') {
                break;
            }
            i = j - 1;
        }
        numVec.push_back(temp);
        temp.clear();
    }

    sort(numVec.begin(), numVec.end());

    string result;
    for (auto str : numVec) {
        result += str + " ";
    }
    return result.substr(0, result.size() - 1);
}