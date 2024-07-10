```c++
#include <iostream>
#include <vector>
#include <algorithm>

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
    vector<int> q;
    int w;
    
    cout << "Enter the number of queries: ";
    cin >> w;
    cout << "Enter the queries: ";
    for(int i=0; i<w; i++) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    
    if(will_it_fly(q, w)) {
        cout << "The plane will fly." << endl;
    } else {
        cout << "The plane will not fly." << endl;
    }
    
    return 0;
}