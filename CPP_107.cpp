```cpp
#include <iostream>
#include <vector>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool isPalindrome(int n) {
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }
    return n == rev;
}

int checkNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string str = to_string(n);  
    string rev = "";  
    for (char c : str) {  
        rev = c + rev;  
    }
    string s = to_string(n);
    vector<int> v1(stoi(s));
    s = to_string(n);
    std::vector<int> v2(stoi(s));
    if (same(v1, v2) && isPalindrome(n) && n % 2 == 0) 
        cout << "The number is even and palindrome.\n";
    else
        cout << "The number is not even and palindrome.\n";
    return 0;
}

int main() {
    checkNumber();
    return 0;
}