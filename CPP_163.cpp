#include <vector>

bool issame(vector<int> vecA, vector<int> vecB) {
    if (vecA.size() != vecB.size()) {
        return false;
    }
    
    for (int i = 0; i < vecA.size(); ++i) {
        if (vecA[i] != vecB[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    // main function code here
}