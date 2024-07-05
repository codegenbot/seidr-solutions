#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

string find_max(vector<string> words) {
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
    cout << (find_max({"play", "display", "abcd"}) == "display") << endl; // Example Test
    return 0;
}