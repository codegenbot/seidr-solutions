```
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

std::vector<int> to_vector(int num) {
    std::vector<int> v;
    while (num != 0) {
        int remainder = num % 10;
        v.push_back(remainder);
        if (num == 0) break; 
        num /= 10;
    }
    return v;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string str = to_string(n);  
    string rev = "";  
    for (char c : str) {  
        rev = c + rev;  
    }
    if (same(to_vector(n), to_vector(stoi(rev))) && isPalindrome(n) && n % 2 == 0) 
        cout << "The number is even and palindrome.\n";
    else
        cout << "The number is not even and palindrome.\n";
    return 0;
}