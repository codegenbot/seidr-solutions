#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int j = 0; // index of target
    for (int i = 0; i <= text.length() - target.length(); i++) {
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
            j++;
        }
    }
    return result;
}

// function to find the greatest common divisor
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}