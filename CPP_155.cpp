#include <vector>
#include <cassert>
#include <ostream>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> even_odd_count(int num) {
    vector<int> result;
    int count = 0;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            count++;
        num /= 10;
    }
    result.push_back(count);
    result.push_back(abs(num));
    return result;
}

vector<int> even_odd_count(int n) {
    vector<int> result;
    int count = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 == 0)
            count++;
        n /= 10;
    }
    result.push_back(count);
    result.push_back(abs(n));
    return result;
}

int main() {
    assert(issame(even_odd_count(0), vector<int>{1,0}));
    
    int n; 
    cin >> n; 

    auto [even, odd] = even_odd_count(n);

    cout << "Number of Even digits: " << even << endl;
    cout << "Absolute value of the remaining Number: " << odd << endl;

    return 0;
}