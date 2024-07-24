#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

string anti_shuffle(string s) {
    istringstream iss(s);
    string word;
    ostringstream oss;
    
    while (iss >> word) {
        string temp;
        for (char c : word) {
            temp += (c <= temp.back()) ? c + "" : "";
        }
        oss << temp << " ";
    }
    
    return oss.str();
}

int main() {
    cout << anti_shuffle("Hi") << endl;  // prints: Hi
    cout << anti_shuffle("hello") << endl;  // prints: ehllo
    cout << anti_shuffle("Hello World!!!") << endl;  // prints: Hello !!!Wdlor
    
    return 0;
}