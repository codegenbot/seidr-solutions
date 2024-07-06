#include <vector>
#include <algorithm>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a.size() == 0 && b.size() == 0) || (a.size() == b.size() && a == b);
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    sort(result.begin(), result.end());
    return result;
}

void driver() {
    assert(issame({get_odd_collatz(12)}, {1, 2, 6}) == true);
    int n;
    cout << "Enter a number: ";
    cin >> n;
    auto collatz = get_odd_collatz(n);
    if (collatz.size() > 0) {
        for (int i : collatz)
            cout << i << " ";
    }
    else
        cout << "No sequence found." << endl;
}