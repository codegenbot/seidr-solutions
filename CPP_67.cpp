#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0, oranges = 0;
    size_t pos_apples = s.find("apples");
    size_t pos_oranges = s.find("oranges");
    
    if (pos_apples != string::npos) {
        apples = stoi(s.substr(0, pos_apples));
    }
    
    if (pos_oranges != string::npos) {
        oranges = stoi(s.substr(s.find_last_of(' ', pos_oranges - 1) + 1, pos_oranges));
    }
    
    return n - apples - oranges;
}

int main() {
    string s;
    int n;
    getline(cin, s);
    cin >> n;
    cout << fruit_distribution(s, n) << endl;
    return 0;
}