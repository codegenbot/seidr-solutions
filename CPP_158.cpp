#include <string>
using namespace std;

int find_max(vector<string> words){
    int result = -1;
    int max_length = 0;

    for (const auto& word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > max_length) {
            max_length = unique_chars.size();
            result = 0; // Assuming the function should return an index
        } else if (unique_chars.size() == max_length && word < result) {
            result = 1; // Assuming the function should return an index
        }
    }

    return result;
}