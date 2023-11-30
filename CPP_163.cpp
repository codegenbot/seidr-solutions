#include <vector>

bool issame(vector<int> a, vector<int> b) {
}

vector<int> generate_integers(int a, int b);

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }
    return result;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
}