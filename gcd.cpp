#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        bool found = true;
        for (int j = 0; j < target.length(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    return indices;
}

// Function to find the greatest common divisor of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}