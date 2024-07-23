#include <iostream>
#include <vector>
#include <cassert>

bool triples_sum_to_zero(const int* l, int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main(int argc, char* argv[]) {
    std::vector<int> arr;
    for (int i = 1; i < argc; i++) {
        arr.push_back(std::stoi(argv[i]));
    }

    assert(triples_sum_to_zero(arr.data(), arr.size()) == false);

    return 0;
}