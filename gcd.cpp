#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int last = 0;
    while (true) {
        size_t pos = text.find(target, last);
        if (pos == string::npos) break;
        result.push_back(pos);
        last = pos + 1;
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