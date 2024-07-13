#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(std::string text, std::string target) {
    vector<int> indices;
    int start = 0;
    while (start + target.length() <= text.length()) {
        size_t pos = text.find(target, start);
        if (pos != string::npos) {
            indices.push_back(pos);
            start = pos + 1;
        } else {
            break;
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