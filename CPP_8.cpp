#include <vector>

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}

bool issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> result = sum_product(numbers);
    
    vector<int> expected = {15, 120};

    if (issame(result, expected)) {
        return 0;
    } else {
        return 1;
    }
}