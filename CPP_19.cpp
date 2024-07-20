#include <algorithm>
#include <string>
#include <map>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp += numbers[i];
        if (i == numbers.length() - 1 || numbers[i + 1] != ' ') {
            numVec.push_back(temp);
            temp = "";
        }
    }

    sort(numVec.begin(), numVec.end(), [&numMap](string a, string b) {
        return to_string(numMap[a]) < to_string(numMap[b]);
    });

    string result;
    for (auto &str : numVec) {
        result += str + " ";
    }
    return result.substr(0, result.length() - 1);
}