#include <string>
#include <set>

using namespace std;

int count_distinct_characters(string str) {
    set<char> distinct_chars(str);
    return distinct_chars.size();
}