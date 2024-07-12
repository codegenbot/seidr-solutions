#include<stdio.h>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };

    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp = "";
        while (i < numbers.length() && numbers[i] != ' ') {
            temp += numbers[i];
            i++;
        }
        numVector.push_back(temp);
    }

    sort(numVector.begin(), numVector.end(),
         [&numMap](const string& a, const string& b) {
             return to_string(numMap.at(a)) < to_string(numMap.at(b));
         });

    string result = "";
    for (string s : numVector) {
        result += s + " ";
    }
    return result.substr(0, result.length() - 1);
}