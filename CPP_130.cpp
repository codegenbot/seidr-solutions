#include <vector>

vector<int> tri(int n)
{
    vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
            }
        }
    }
    return result;
}

bool issame(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> a = tri(1);
    if (issame(a, {1, 3})) {
        cout << "Vectors are the same" << endl;
    } else {
        cout << "Vectors are different" << endl;
    }
    return 0;
}