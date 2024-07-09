#include <algorithm>
#include <sstream>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};

    vector<string> numVec;
    stringstream ss(numbers);
    string num;

    while (getline(ss, num, ' ')) {
        if (numMap.find(num) != numMap.end()) {
            numVec.push_back(num);
        }
    }

    sort(numVec.begin(), numVec.end());

    return join(numVec, " ");
}

string join(vector<string>& vec, string delimiter) {
    string result;
    for (int i = 0; i < vec.size(); ++i) {
        result += vec[i];
        if (i < vec.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}