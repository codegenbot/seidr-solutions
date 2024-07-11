#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of elements

    pair<int, int> p[n]; // Array of pairs
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b; // Read the two numbers for each pair
        p[i] = make_pair(a, b); // Store the pair in array
    }

    pair<int, int> max_pair = *max_element(p, p+n, [](const pair<int,int>& a, const pair<int,int>& b) {
        return a.first < b.first;
    });
    cout << max_pair.first << endl;

    return 0;
}