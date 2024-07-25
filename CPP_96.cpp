#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> count_up_to(int n) {
    vector<int> result;
    if (n < 2) {
        return result;
    }

    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int n = 20; // Example input
    vector<int> numbers1 = count_up_to(n);
    vector<int> numbers2 = count_up_to(n);

    if (issame(numbers1, numbers2)) {
        cout << "The results are the same." << endl;
    } else {
        cout << "The results are not the same." << endl;
    }

    return 0;
}