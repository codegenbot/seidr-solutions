#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    cout << "The Collatz Conjecture sequence for 123 is: ";
    copy(get_odd_collatz(123).begin(), get_odd_collatz(123).end(), 
         ostream_iterator<int>(cout, " "), (void)0);
    cout << endl;
    return 0;
}