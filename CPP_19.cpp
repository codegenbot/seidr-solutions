#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp = "";
    for (char c : numbers) {
        if (c == ' ') {
            numVec.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    numVec.push_back(temp);

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (string s : numVec) {
        result += s + " ";
    }

    return result.substr(0, result.length() - 1);
}