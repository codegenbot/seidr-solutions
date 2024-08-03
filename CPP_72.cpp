```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false;
    int sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

int main() {
    vector<int> q;
    int w;
    cout << "Enter the number of queens: ";
    int n; cin >> n;
    cout << "Enter the weights: ";
    for(int i=0;i<n;i++)cin>>q[i];
    cout << "Enter the weight limit: ";
    cin >> w;
    if(will_it_fly(q, w))
        cout << "The queens will fly.";
    else
        cout << "The queens won't fly.";
    return 0;
}