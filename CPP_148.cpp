#include <iostream>
#include <string>
using namespace std;

void bf(string n) {
    if (n.empty())
        cout << "Error: Input string is empty." << endl;
    else
        cout << "Input string is valid." << endl;
}

int main() {
    std::string str;
    cin >> str;  
    bf(str);      
    return 0;
}