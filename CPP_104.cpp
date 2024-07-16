#include <vector>

bool issame(vector<int> x, vector<int> y) {
    if (x.size() != y.size()) {
        return false;
    }
    for (int i = 0; i < x.size(); ++i) {
        if (x[i] != y[i]) {
            return false;
        }
    }
    return true;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> input = {123, 456, 789};
    vector<int> output = unique_digits(input);
    vector<int> target = {123, 789};

    bool result = issame(output, target);

    return 0;
}