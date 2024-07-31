#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

string find_max(const vector<string>& words) {
    string result;
    int max_unique_chars = 0;
    
    for (const string& word : words) {
        int unique_chars = unordered_set<char>(word.begin(), word.end()).size();
        
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < result)) {
            max_unique_chars = unique_chars;
            result = word;
        }
    }
    
    return result;
}

int main() {
    assert ((find_max({"play", "play", "play"}) == "play"));

    return 0;
}