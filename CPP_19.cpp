#include<string>
#include<map>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    string sortedNumbers;
    vector<string> numVector;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (auto it = numMap.begin(); it != numMap.end(); it++) {
            if (it->first.find(string(1, numbers[i])) != string::npos) {
                numVector.push_back(it->first);
                break;
            }
        }
    }

    sort(numVector.begin(), numVector.end());
    for (auto str : numVector) {
        sortedNumbers += str + " ";
    }
    return sortedNumbers.substr(0, sortedNumbers.length() - 1);
}