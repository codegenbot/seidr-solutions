#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (char c : numbers) {
        if (c == ' ') {
            continue;
        }
        temp += c;
        if (numMap.find(temp) != numMap.end()) {
            numVec.push_back(temp);
            temp = "";
        }
    }

    sort(numVec.begin(), numVec.end());
    string result = "";
    for (string s : numVec) {
        result += s + " ";
    }
    return result;
}