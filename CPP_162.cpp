#include <iostream>
#include <string>
#include <sstream>
#include <functional>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    stringstream ss;
    hash<string> hasher;
    ss << hex;
    ss << hasher(text);

    return ss.str();
}

int main() {
    string text;
    getline(cin, text);
    cout << string_to_md5(text) << endl;
    return 0;
}