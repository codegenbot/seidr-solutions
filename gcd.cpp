#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while (index <= text.length() - target.length()) {
        index = text.find(target, index);
        if (index == string::npos) break;
        indices.push_back(index);
        index += 1; // increment by 1 to avoid overlapping
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