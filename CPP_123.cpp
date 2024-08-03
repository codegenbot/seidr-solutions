#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    int current = n;
    
    while (current != 1) {
        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = 3 * current + 1;
        }
        
        if (current % 2 != 0) {
            result.push_back(current);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> res = get_odd_collatz(n);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}