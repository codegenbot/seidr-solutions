#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

string find_max(const vector<string>& words) {
    string result = "";
    int max_unique = 0;

    for (const auto& word : words) {
        unordered_set<char> unique_chars(word.begin(), word.end());
        int unique_count = unique_chars.size();

        if (unique_count > max_unique || (unique_count == max_unique && word < result)) {
            max_unique = unique_count;
            result = word;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> words[i];
    }
    
    cout << find_max(words) << endl;
    
    return 0;
}