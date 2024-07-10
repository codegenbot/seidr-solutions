#include <iostream>
#include <string>
using namespace std;

void bfs(string n) {
    if (n.empty())
        cout << "Error: Input string is empty." << endl;
    else
        cout << "Input string is valid." << endl;
}

int main() {
    int num;
    cin >> num;
    string s = to_string(num);
    bfs(s);  
    return 0;
}