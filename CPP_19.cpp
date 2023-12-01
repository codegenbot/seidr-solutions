#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

string sort_numbers(string numbers){
    // Map to store mapping between number strings and their corresponding integer values
    map<string, int> numMap;
    numMap["zero"] = 0;
    numMap["one"] = 1;
    numMap["two"] = 2;
    numMap["three"] = 3;
    numMap["four"] = 4;
    numMap["five"] = 5;
    numMap["six"] = 6;
    numMap["seven"] = 7;
    numMap["eight"] = 8;
    numMap["nine"] = 9;

    // Parse the input string and convert it into a vector of number strings
    stringstream ss(numbers);
    string temp;
    vector<string> numStrings;
    while (ss >> temp) {
        numStrings.push_back(temp);
    }

    // Sort the vector of number strings based on their integer values
    sort(numStrings.begin(), numStrings.end(), [&](const string& a, const string& b) {
        return numMap[a] < numMap[b];
    });

    // Generate the sorted string with space delimiters
    string sortedNumbers;
    for (int i = 0; i < numStrings.size(); i++) {
        sortedNumbers += numStrings[i];
        if (i != numStrings.size() - 1) {
            sortedNumbers += " ";
        }
    }

    return sortedNumbers;
}