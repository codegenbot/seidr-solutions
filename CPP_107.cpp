```
#include <iostream>
#include <vector>
using namespace std;

bool issame(int a[], int b[]) {
    for (int i = 0; i < 3; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; i++) {
        int num = i;
        string str = to_string(num);
        if (issame(&num, &stoi(str + stoi(string(reverse(str))))) 
            && (num % 2 == 0))
            result[0]++;
        else if (issame(&num, &stoi(str + stoi(string(reverse(str))))) 
                 && (num % 2 != 0))
            result[1]++;
    }
    return result[0] | (result[1] << 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    vector<int> result = even_odd_palindrome(n);

    cout << "Number of even palindromes: " << result & 1 << endl;
    cout << "Number of odd palindromes: " << (result >> 1) & ((1 << 1) - 1) << endl;
}