#include <string>
using namespace std;

int find_max(vector<string> words){
    int max_length = 0;

    for (const auto& word : words) {
        if (word.length() > max_length) {
            max_length = word.length();
        }
    }

    return max_length;
}