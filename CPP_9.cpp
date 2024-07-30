#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers);

int main() {
    // Sample test case
    vector<int> input = {1, 3, -1, -3, 5, 3, 6, 7};
    vector<int> result = rolling_max(input);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int max_num = numbers[i];
        for (int j = i + 1; j < n; ++j) {
            if (numbers[j] > max_num) {
                max_num = numbers[j];
            }
        }
        result.push_back(max_num);
    }
    return result;
}