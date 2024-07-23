#include <string>
#include <algorithm>
using namespace std;

int count_distinct_characters(string str) {
    string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    set<char> unique_chars(temp.begin(), temp.end());
    return unique_chars.size();
}