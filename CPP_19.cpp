#include<stdio.h>
#include<string>
#include<map>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap;
    for (int i = 0; i < 10; ++i) {
        switch(i) {
            case 0: numMap["zero"] = i; break;
            case 1: numMap["one"] = i; break;
            case 2: numMap["two"] = i; break;
            case 3: numMap["three"] = i; break;
            case 4: numMap["four"] = i; break;
            case 5: numMap["five"] = i; break;
            case 6: numMap["six"] = i; break;
            case 7: numMap["seven"] = i; break;
            case 8: numMap["eight"] = i; break;
            case 9: numMap["nine"] = i; break;
        }
    }

    vector<string> sortedNums;
    string temp;
    for (int i = 0; i < numbers.length(); ++i) {
        if (numbers[i] == ' ') {
            continue;
        } else {
            for (auto it = numMap.begin(); it != numMap.end(); ++it) {
                if (numbers.substr(i, it->first.length()).compare(it->first) == 0) {
                    sortedNums.push_back(temp + it->first);
                    i += it->first.length() - 1;
                    temp = "";
                    break;
                }
            }
        }
    }

    string result;
    for (int i = 0; i < sortedNums.size(); ++i) {
        if (i == 0) {
            result = sortedNums[i];
        } else {
            result += " " + sortedNums[i];
        }
    }

    return result;
}