#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int accumulate(vector<int> q, int start = 0) {
    return accumulate(q.begin() + start, q.end(), 0);
}

bool will_it_fly(vector<string> q, int w) {
    string s = "";
    for (string i : q) {
        s += i;
    }
    return is_palindrome(s) && accumulate(stoi(i) for (string i : q), 0) <= w;
}

int main() {
    int n, w;

    cout << "Enter the number of queens: ";
    cin >> n;

    vector<string> q;

    for (int i=0; i<n; i++) {
        string temp;
        cout << "Enter position of queen " << i+1 << ": ";
        cin >> temp;
        q.push_back(temp);
    }

    cout << "Enter the total weight: ";
    cin >> w;

    if (will_it_fly(q, w))
        cout << "The queens will fly with the given weight.";
    else
        cout << "The queens will not fly with the given weight.";

    return 0;
}