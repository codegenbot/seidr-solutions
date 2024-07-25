#include <algorithm>
#include <string>

string sort_numbers(const string &numbers) {
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, 
                            {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> rev_num_map;

    vector<string> words;
    string word;
    istringstream iss(numbers);
    while (iss >> word) {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string result;
    for(const auto &num : words) {
        result += num + " ";
    }

    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}