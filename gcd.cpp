#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        result.push_back(pos);
        pos += target.length();
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}