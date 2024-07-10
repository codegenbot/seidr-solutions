```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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
    cout << "Enter the number of queens: ";
    cin >> w;
    cout << "Enter the queen's weights: ";
    for(int i = 0; i < w; i++) {
        int weight;
        cin >> weight;
        q.push_back(weight);
    }
    if(will_it_fly(q, w)) {
        cout << "The queens will fly." << endl;
    } else {
        cout << "The queens won't fly." << endl;
    }
    return 0;
}