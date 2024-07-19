#include <iostream>
#include <vector>

using namespace std;

vector<int> count_up_to(int n);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> count_up_to(int n){
    vector<int> primes;
    for(int i=2; i<n; ++i){
        bool is_prime = true;
        for(int j=2; j*j<=i; ++j){
            if(i % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;

    vector<int> result = count_up_to(n);

    for (int prime : result) {
        cout << prime << " ";
    }

    vector<int> test1 = {1, 2, 3, 4};
    vector<int> test2 = {1, 2, 3, 4};

    cout << "\nChecking if test1 and test2 are the same: ";
    if (issame(test1, test2)) {
        cout << "They are the same.\n";
    } else {
        cout << "They are different.\n";
    }

    return 0;
}