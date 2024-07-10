#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }

    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> count_up_to(int n){
    std::vector<int> result;
    if(n <= 1) {
        return result;
    }

    std::vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i < n; ++i) {
        if(isPrime[i]) {
            for(int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for(int i = 2; i < n; ++i) {
        if(isPrime[i]) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    assert(issame(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    
    std::cout << "Test Passed!" << std::endl;

    return 0;
}