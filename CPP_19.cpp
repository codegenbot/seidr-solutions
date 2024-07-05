#include<sstream>
#include<vector>
#include<algorithm>

string sort_numbers(string numbers) {
    map<string, int> numMap = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };
    
    map<int, string> revNumMap = {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"},
        {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"},
        {8, "eight"}, {9, "nine"}
    };
    
    stringstream ss(numbers);
    string word;
    vector<int> numList;

    while (ss >> word) {
        numList.push_back(numMap[word]);
    }

    sort(numList.begin(), numList.end());

    stringstream sortedNumbers;
    for (size_t i = 0; i < numList.size(); ++i) {
        sortedNumbers << revNumMap[numList[i]];
        if (i != numList.size() - 1) {
            sortedNumbers << " ";
        }
    }
    
    return sortedNumbers.str();
}