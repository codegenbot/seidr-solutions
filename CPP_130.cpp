#include <vector>

vector<int> tri(int n) {
    vector<int> result;
    if (n == 0) {
        result.push_back(0);
    } else if (n == 1) {
        result.push_back(3);
    } else if (n == 2) {
        result.push_back(1);
        result.push_back(3);
    } else {
        result.push_back(1);
        result.push_back(3);
        result.push_back(2);
        for (int i = 3; i <= n; ++i) {
            if (i % 2 == 0) {
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
            }
        }
    }
    return result;
}

int main() {
    vector<int> output = tri(5);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}