#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int last = -1;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        if (text.substr(i, target.length()) == target) {
            if (last < 0)
                last = i;
            else
                indices.push_back(i - last);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}