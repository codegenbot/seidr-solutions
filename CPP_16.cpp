#include <string>
#include <unordered_set>

using namespace std;

int count_distinct_characters(string str) {
    unordered_set<char> distinct_chars;
    for (char c : str) {
        distinct_chars.insert(tolower(c));
    }
    return distinct_chars.size();
}