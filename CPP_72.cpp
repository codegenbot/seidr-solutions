```cpp
#include <iostream>
#include <vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    vector<int> v(q);
    reverse(v.begin(), v.end());
    if (v != q)
        return false;
    int sum = 0;
    for (int i : q)
        sum += i;
    return sum <= w;
}

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> q(n);
    for (int &i : q) 
        cin >> i;
    
    if(will_it_fly(q, w)) 
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}