```cpp
#include <iostream>
#include <vector>
#include <string>

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
        if (temp == 0) break; 
        temp /= 10;
    }
    return n == rev;
}

vector<int> to_vector(int num) {
    vector<int> v;
    string str = to_string(num);  
    for (char c : str) {  
        v.push_back(c - '0'); // subtract '0' because '0'-'9' is the ASCII value for digits
    }
    return v;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (same(to_vector(n), to_vector(stoi(to_string(n)))) && isPalindrome(n) && n % 2 == 0) 
        cout << "The number is even and palindrome.\n";
    else
        cout << "The number is not even and palindrome.\n";
    return 0;
}