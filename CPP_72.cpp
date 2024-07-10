```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool will_it_fly(vector<int> q, int w);

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> q(n);
    for(int i=0; i<n; ++i){
        cin >> q[i];
    }
    if(will_it_fly(q,w))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}