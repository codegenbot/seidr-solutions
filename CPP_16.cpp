#include <set>
#include <string>
#include <cctype> // for tolower

using namespace std;

int count_distinct_characters(string str){ 
    set<char> distinct_chars;
    for(char c : str) {
        distinct_chars.insert(tolower(c));
    }
    return distinct_chars.size();
}