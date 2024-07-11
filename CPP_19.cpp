#include <vector>
#include <algorithm>

string sort_numbers(string numbers) {
    vector<string> numVec;
    string token;

    istringstream iss(numbers);
    while (getline(iss, token, ' ')) {
        numVec.push_back(token);
    }

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (const auto& str : numVec) {
        result += str + " ";
    }
    return result;
}