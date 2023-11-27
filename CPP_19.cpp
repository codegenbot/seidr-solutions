#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string sort_numbers(string numbers) {
    // Create a map to store the numerical value of each word
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

    // Split the input string into individual words
    stringstream ss(numbers);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }

    // Sort the words based on their numerical value
    sort(words.begin(), words.end(), [&](const string& a, const string& b) {
        return numberMap[a] < numberMap[b];
    });

    // Join the sorted words into a string
    string result;
    for (const string& word : words) {
        result += word + " ";
    }

    // Remove the trailing space
    result.pop_back();

    return result;
}

int main() {
    string numbers;
    getline(cin, numbers);

    string sortedNumbers = sort_numbers(numbers);
    cout << sortedNumbers << endl;

    return 0;
}