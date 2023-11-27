#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string sort_numbers(string numbers) {
    // Create a map to map the numberals to their corresponding numerical value
    map<string, int> numeral_value{
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    // Split the input string by spaces
    stringstream ss(numbers);
    string numeral;
    vector<string> numeral_list;
    while (ss >> numeral) {
        numeral_list.push_back(numeral);
    }

    // Sort the numerals based on their numerical value
    sort(numeral_list.begin(), numeral_list.end(), [&](const string& a, const string& b) {
        return numeral_value[a] < numeral_value[b];
    });

    // Create the sorted string with numerals
    string sorted_numbers;
    for (const auto& numeral : numeral_list) {
        sorted_numbers += numeral + " ";
    }

    // Remove the trailing space
    sorted_numbers.pop_back();

    return sorted_numbers;
}