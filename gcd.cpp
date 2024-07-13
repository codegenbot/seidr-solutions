Here is the solution:

#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int last = 0;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < target.size(); ++j) {
            if (text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found && i > last) {
            indices.push_back(i);
            last = i + target.size();
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