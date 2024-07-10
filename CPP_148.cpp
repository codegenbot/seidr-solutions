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
    int num;
    cin >> num;
    bf(to_string(num));  
    return 0;
}