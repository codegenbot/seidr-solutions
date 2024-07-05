#include <set>
#include <string>
#include <iostream>

using namespace std;

int count_distinct_characters(string str){ 
    set<char> distinct_chars;
    for (char c : str) {
        distinct_chars.insert(tolower(c));
    }
    return distinct_chars.size();
}

int main() {
    cout << count_distinct_characters("Jerry jERRY JeRRRY") << endl; // expected output: 5
    return 0;
}