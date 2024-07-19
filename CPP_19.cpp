string sort_numbers(const string& numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    
    vector<string> words;
    stringstream ss(numbers);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), [&](const string& a, const string& b) {
        return numMap[a] < numMap[b];
    });

    string sortedNumbers;
    for (const string& word : words) {
        sortedNumbers += word + " ";
    }
    
    return sortedNumbers;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    
    return 0;
}