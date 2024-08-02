#include <algorithm>
#include <string>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2},
                                   {"three", 3}, {"four", 4}, {"five", 5},
                                   {"six", 6}, {"seven", 7}, {"eight", 8},
                                   {"nine", 9}};

    vector<string> numberVector;
    string num;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }

        for (int j = i + 1; j <= numbers.length(); j++) {
            if (numbers[j] != ' ') {
                num += numbers[j];
            } else {
                break;
            }
        }

        numberVector.push_back(num);
        num = "";
    }

    sort(numberVector.begin(), numberVector.end(),
         [&numberMap](string a, string b) {
             return numberMap.at(a) < numberMap.at(b);
         });

    string result;
    for (auto &num : numberVector) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}