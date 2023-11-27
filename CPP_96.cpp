#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> count_up_to(int n){
    vector<int> primes;
    if(n <= 1){
        return primes;
    }
    primes.push_back(2);
    for(int i = 3; i < n; i += 2){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes.push_back(i);
        }
    }
    return primes;
}

bool issame(vector<int> a, vector<int> b) {
    // Check if the vectors a and b are the same size
    if (a.size() != b.size()) {
        return false;
    }

    // Check if each element in a is equal to the corresponding element in b
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    // Vectors are the same
    return true;
}

int main() {
    assert (issame(count_up_to(101) , {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));

    return 0;
}