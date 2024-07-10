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
    cout << "Enter the weights: ";
    for (int i = 0; i < 5; ++i) {
        int weight;
        cin >> weight;
        q.push_back(weight);
    }
    cout << "Enter the maximum weight: ";
    cin >> w;
    if (will_it_fly(q, w)) {
        cout << "The weights will fly." << endl;
    } else {
        cout << "The weights won't fly." << endl;
    }
    return 0;
}