#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    string num_apples = "";
    int total_fruits = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            num_apples += s[i];
        } else if (s[i] == ' ') {
            break;
        }
    }
    
    int apples = stoi(num_apples);
    total_fruits = n - apples;
    
    return total_fruits;
}

int main() {
    string s1 = "5 apples and 6 oranges";
    int n1 = 19;
    cout << fruit_distribution(s1, n1) << endl;

    string s2 = "0 apples and 1 oranges";
    int n2 = 3;
    cout << fruit_distribution(s2, n2) << endl;

    string s3 = "2 apples and 3 oranges";
    int n3 = 100;
    cout << fruit_distribution(s3, n3) << endl;

    string s4 = "100 apples and 1 oranges";
    int n4 = 120;
    cout << fruit_distribution(s4, n4) << endl;

    return 0;
}