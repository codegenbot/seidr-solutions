```c++
#include <vector>
#include <string>

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        size_t found = text.find(target, start);
        if (found != string::npos) {
            indices.push_back(found);
            start = found + 1;
        } else {
            break;
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}