```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (!str.compare(to_string(reverse(str)))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    vector<int> q;
    int w;
    cout << "Enter the number of quarters: ";
    cin >> w;
    cout << "Enter the weights: ";
    for (int i = 0; i < w; i++) {
        int weight;
        cin >> weight;
        q.push_back(weight);
    }
    if(will_it_fly(q, w))
        cout << "The plane will fly.\n";
    else
        cout << "The plane won't fly.\n";
    return 0;
}