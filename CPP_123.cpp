#include <vector>
#include <iostream>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    vector<int> odd_collatz = get_odd_collatz(num);

    for (int i : odd_collatz) {
        cout << i << " ";
    }
    
    return 0;
}