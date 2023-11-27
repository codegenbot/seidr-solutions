#include <vector>
#include <iostream>

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

vector<int> factorize(int n);

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

vector<int> factors = factorize(3 * 2 * 3);
vector<int> expected_factors = {2, 3, 3};
for (int i = 0; i < factors.size(); i++) {
    cout << factors[i] << " ";
}
cout << endl;
return 0;