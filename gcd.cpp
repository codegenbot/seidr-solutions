Here is the solution:

#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        int j = 0;
        while (j < target.size()) {
            if (text[i + j] != target[j]) {
                break;
            }
            j++;
        }
        if (j == target.size()) {
            result.push_back(i);
        }
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}