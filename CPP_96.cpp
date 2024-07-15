#include <vector>

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    int num = 2;
    while (result.size() < n) {
        bool is_prime = true;
        for (int i = 2; i < num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            result.push_back(num);
        }
        ++num;
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(count_up_to(101) , {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    return 0;
}