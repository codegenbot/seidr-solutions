#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    return is_palindrome(s) && accumulate(q.begin(), q.end(), 0) <= w;
}

int main() {
    int num, weight;
    vector<int> queue;

    cout << "Enter the number of elements in the queue: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        int val;
        cout << "Enter element " << i+1 << ": ";
        cin >> val;
        queue.push_back(val);
    }

    cout << "Enter the weight: ";
    cin >> weight;

    if(will_it_fly(queue, weight)) {
        cout << "The items will fly." << endl;
    } else {
        cout << "The items won't fly." << endl;
    }

    return 0;
}