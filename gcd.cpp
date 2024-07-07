#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prev = 0;
    while (true) {
        size_t pos = text.find(target, prev);
        if (pos == string::npos) break;
        indices.push_back(pos);
        prev = pos + 1;
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}