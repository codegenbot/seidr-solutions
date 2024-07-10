#include <vector>
#include <algorithm>

using namespace std;

string sortNumbers(string numbers) {
    vector<string> numVec;
    string temp;
    
    for (char c : numbers) {
        if (isdigit(c)) continue;
        if (!temp.empty()) {
            numVec.push_back(temp);
            temp = "";
        }
        temp += to_string(c == ' ' ? 0 : (c - '0' + 1));
    }
    if (!temp.empty()) numVec.push_back(temp);

    sort(numVec.begin(), numVec.end());
    
    string result;
    for (string str : numVec) {
        result += str;
        result += " ";
    }
    return result.substr(0, result.size() - 1);
}