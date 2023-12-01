#include <vector>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; i++) {
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                result.push_back(digit);
            }
            temp /= 10;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // TODO: Add your implementation here
    // Replace the following line with your implementation
    return false;
}

int main() {
    assert (issame(generate_integers(17,89) , {}));
    // TODO: Add more test cases
}