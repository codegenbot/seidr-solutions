#include <algorithm>
#include <sstream>

using namespace std;

string sort_numbers(string numbers) {
    istringstream iss(numbers);
    string word;
    vector<string> words;
    
    while (iss >> word) {
        words.push_back(word);
    }
    
    sort(words.begin(), words.end());
    
    stringstream ss;
    for (const auto& word : words) {
        ss << word << " ";
    }
    
    return ss.str();
}