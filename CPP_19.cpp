#include <sstream>
#include <vector>
#include <algorithm>

map<string, int> num_map = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
    {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    istringstream iss(numbers);
    vector<string> words;
    string word;

    while (iss >> word) {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) result += " ";
        result += words[i];
    }

    return result;
}