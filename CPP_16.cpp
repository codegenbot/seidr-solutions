#include <string>
#include <set>

using namespace std;

int count_distinct_characters(string str) {
    set<char> unique_chars(str.begin(), str.end());
    return unique_chars.size();
}