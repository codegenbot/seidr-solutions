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
    cin >> w;
    cout << "Enter " << w << " queries: ";
    for(int i=0; i<w; i++) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    if(will_it_fly(q, w))
        cout << "The plane will fly." << endl;
    else
        cout << "The plane will not fly." << endl;
    return 0;
}