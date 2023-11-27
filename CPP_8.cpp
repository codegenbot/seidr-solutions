#include <vector>

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    if (issame(a, b)) {
        vector<int> result = sum_product(a);
        for (int num : result) {
            cout << num << " ";
        }
    }
    return 0;
}