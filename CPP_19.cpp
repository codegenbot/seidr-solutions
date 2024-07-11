#include <algorithm>
#include <vector>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp = "";
    for (char c : numbers) {
        if (c != ' ') {
            temp += c;
        } else {
            numVec.push_back(temp);
            temp = "";
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