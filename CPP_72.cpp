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

long long accumulate(vector<int> q, long long int sum=0LL) {
    return accumulate(q.begin(), q.end(), sum);
}

bool willItFly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    return is_palindrome(s) && accumulate(q) <= w;
}

int main() {
    int n, w;
    vector<int> q;

    cout << "Enter the number of queens: ";
    cin >> n;

    for (int i=0; i<n; i++) {
        int temp;
        cout << "Enter position of queen " << i+1 << ": ";
        cin >> temp;
        q.push_back(temp);
    }

    cout << "Enter the total weight: ";
    cin >> w;

    bool result = willItFly(q, w);

    if (result)
        cout << "The queens will fly with the given weight.";
    else
        cout << "The queens will not fly with the given weight.";

    return 0;
}