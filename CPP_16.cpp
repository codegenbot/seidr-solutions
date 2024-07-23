#include <algorithm>
#include <string>
#include <set>

using namespace std;

int count_distinct_characters(string str) {
    set<char> s;
    for (char c : str) {
        if (isalpha(c)) {
            char ch = tolower(c);
            s.insert(ch);
        }
    }
    return s.size();
}