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

bool issame(vector<int> a, vector<int> b){
    int n = a.size();
    if (n != b.size()) {
        return false;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // your code here
    return 0;
}