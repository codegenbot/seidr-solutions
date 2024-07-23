```cpp
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

    if (is_palindrome(string(accumulate(q.begin(),q.end(),"")) && accumulate(q.begin(),q.end(),0) <= w)
        cout << "The queens will fly with the given weight.";
    else
        cout << "The queens will not fly with the given weight.";

    return 0;
}