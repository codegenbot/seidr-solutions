#include <iostream>
#include <set>
#include <string>
#include <cctype>
using namespace std;

int count_distinct_characters(string str) { 
    set<char> distinct_chars;
    for (char c : str) {
        distinct_chars.insert(tolower(c));
    }
    return distinct_chars.size();
}

int main() {
    cout << count_distinct_characters("Jerry jERRY JeRRRY") << endl; // Output should be 5
    return 0;
}