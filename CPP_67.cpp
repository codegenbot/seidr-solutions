#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    
    // Find the number of apples and oranges in the string
    size_t applePos = s.find("apples");
    if (applePos != string::npos) {
        apples = stoi(s.substr(0, applePos));
    }
    
    size_t orangePos = s.find("oranges");
    if (orangePos != string::npos) {
        oranges = stoi(s.substr(applePos + 7, orangePos - applePos - 7));
    }
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}

int main() {
    string s;
    int n;
    getline(cin, s);
    cin >> n;
    
    int result = fruit_distribution(s, n);
    cout << result << endl;
    
    return 0;
}