```
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
    cout << "Enter the weight: ";
    cin >> w;
    cout << "Enter the qualities: ";
    for(int i=0; i<5; i++) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    if(will_it_fly(q, w))
        cout << "The qualities will fly." << endl;
    else
        cout << "The qualities won't fly." << endl;
    
    return 0;
}