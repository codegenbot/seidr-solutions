#include <vector>

bool issame(vector<int> b, vector<int> c) {
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != c[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess);

int main() {
    vector<int> test1 = {1, 2, 3};
    vector<int> test2 = {1, 4, 3};
    vector<int> result = compare(test1, test2);
    for (int i : result) {
        cout << i << " ";
    }
}