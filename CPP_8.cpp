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

bool issame(vector<int> numbers, vector<int> other_numbers) {
    if (numbers.size() != other_numbers.size()) {
        return false;
    }

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] != other_numbers[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> product = sum_product(numbers);

    vector<int> other_numbers = {1, 2, 3, 4, 5};

    bool same = issame(numbers, other_numbers);

    return 0;
}