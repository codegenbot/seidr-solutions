#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers);

int main() {
    string numbers;
    getline(cin, numbers);

    cout << sort_numbers(numbers) << endl;

    return 0;
}

string sort_numbers(string numbers){
    map<string, int> numberMap;
    numberMap["zero"] = 0;
    numberMap["one"] = 1;
    numberMap["two"] = 2;
    numberMap["three"] = 3;
    numberMap["four"] = 4;
    numberMap["five"] = 5;
    numberMap["six"] = 6;
    numberMap["seven"] = 7;
    numberMap["eight"] = 8;
    numberMap["nine"] = 9;

    string result = "";
    string currentNumber = "";
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            result += currentNumber + " ";
            currentNumber = "";
        } else {
            currentNumber += numbers[i];
        }
    }
    result += currentNumber;

    vector<string> numberList;
    currentNumber = "";
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            numberList.push_back(currentNumber);
            currentNumber = "";
        } else {
            currentNumber += result[i];
        }
    }
    numberList.push_back(currentNumber);

    sort(numberList.begin(), numberList.end(), [&](string a, string b) {
        return numberMap[a] < numberMap[b];
    });

    string sortedNumbers = "";
    for (int i = 0; i < numberList.size(); i++) {
        sortedNumbers += numberList[i] + " ";
    }
    sortedNumbers = sortedNumbers.substr(0, sortedNumbers.length() - 1);

    return sortedNumbers;
}