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
    vector<int> q;
    int w;
    cout << "Enter the number of queries: ";
    cin >> q.size();
    q.resize(q.size());
    cout << "Enter the weights: ";
    for (int i = 0; i < q.size(); i++) {
        cin >> q[i];
    }
    cout << "Enter the maximum weight: ";
    cin >> w;
    
    if(will_it_fly(q, w))
        cout << "The plane will fly." << endl;
    else
        cout << "The plane won't fly." << endl;
    
    return 0;
}