#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
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
    vector<int> a = {123, 456, 789};
    vector<int> b = unique_digits(a);
    if (issame(a, b)) {
        cout << "Same" << endl;
    } else {
        cout << "Different" << endl;
    }
    return 0;
}