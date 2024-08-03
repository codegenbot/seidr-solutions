#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, int> histogram(const string& str) {
    map<char, int> result;
    for (char c : str) {
        result[c]++;
    }
    return result;
}

int main() {
    string input;
    cin >> input;

    auto result = histogram(input);
    
    for (auto pair : result) {
        cout << pair.first << " " << pair.second << endl;
    }
    
    return 0;
}