#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longest(vector<string> strings){
    if (strings.empty()) return "None";
    string longest_str = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longest_str.length()) {
            longest_str = str;
        }
    }
    return longest_str;
}

int main() {
    // Example test
    cout << (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz") << endl;
    return 0;
}