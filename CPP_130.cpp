#include <vector>

vector<int> tri(int n) {
    vector<int> sequence(n + 1);
    
    if (n >= 0)
        sequence[0] = 1;
    if (n >= 1)
        sequence[1] = 3;
    if (n >= 2)
        sequence[2] = 2;
    
    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0)
            sequence[i] = 1 + i / 2;
        else
            sequence[i] = sequence[i - 1] + sequence[i - 2] + sequence[i + 1];
    }
    
    return sequence;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
  
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
  
    return true;
}

int main() {
    assert(issame(tri(1), {1, 3}));

    return 0;
}