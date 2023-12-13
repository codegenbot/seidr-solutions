#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // ...
}

vector<int> even_odd_count(int num);

int main() {
    assert (issame(even_odd_count(0), {1, 0}));
    return 0;
}

vector<int> even_odd_count(int num) {
    vector<int> result;
    int countEven = 0, countOdd = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
        num /= 10;
    }
    result.push_back(countEven);
    result.push_back(countOdd);
    return result;
}