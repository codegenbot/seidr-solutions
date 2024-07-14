#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    int pos = -1; // initial position
    while (pos != string::npos) {
        pos = str1.find(str2, pos + 1);
        if (pos != string::npos)
            cout << pos << " "; // print positions where the target appears in the text.
    }
    
    int len1 = str1.length(), len2 = str2.length();
    int result = gcd(0, 0); // initialize GCD
    for(int i = 0; i < (len1 + len2) / len2; i++){
        pos = str1.find(str2, i);
        if(pos != string::npos)
            result = max(result, pos % len2); // update the GCD with the maximum position where target appears.
    }
    
    cout << "GCD of positions: " << result << endl;
}