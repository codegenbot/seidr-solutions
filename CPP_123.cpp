#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        if (n % 2 != 0)
            result.push_back(n);
    }
    return result;
}

int main() {
    int m, n;
    cout << "Enter the first number: ";
    cin >> m;
    cout << "Enter the second number: ";
    cin >> n;
    
    vector<int> a = get_odd_collatz(m);
    vector<int> b = get_odd_collatz(n);

    if (issame(a, b)) {
        if (is_prime(m) && is_prime(n))
            cout << "The numbers are prime and have the same Collatz sequence." << endl;
        else
            cout << "The numbers do not have the same Collatz sequence." << endl;
    } else {
        cout << "The numbers do not have the same Collatz sequence." << endl;
    }
    
    return 0;
}