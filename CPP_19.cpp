#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    istringstream iss(numbers);
    string numStr;
    while (getline(iss, numStr, ' ')) {
        numVec.push_back(numStr);
    }
    sort(numVec.begin(), numVec.end());
    return join(numVec, " ");
}

string join(vector<string>& vec, const string& sep) {
    ostringstream oss;
    for (const auto& str : vec) {
        oss << str << sep;
    }
    return oss.str();
}