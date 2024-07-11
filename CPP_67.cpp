#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    string temp;
    int total_apples = 0, total_oranges = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            temp += s[i];
        } else if (!temp.empty()) {
            if (s.substr(i - 2, 8) == "apples and") {
                total_apples = stoi(temp);
            } else if (s.substr(i - 7, 9) == "oranges and") {
                total_oranges = stoi(temp);
            }
            temp = "";
        }
    }

    return n - total_apples - total_oranges;
}

int main() {
    cout << fruit_distribution("5 apples and 6 oranges", 19) << endl; 
    cout << fruit_distribution("0 apples and 1 oranges",3) << endl; 
    cout << fruit_distribution("2 apples and 3 oranges", 100) << endl; 
    cout << fruit_distribution("100 apples and 1 oranges",120) << endl; 

    return 0;
}