#include <vector>
#include <algorithm>

using namespace std;

std::string sort_numbers(std::string numbers) {
    vector<std::string> numVec;
    std::string temp;
    
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
    
    std::string result;
    for (std::string str : numVec) {
        result += str;
        result += " ";
    }
    return result.substr(0, result.size() - 1);
}