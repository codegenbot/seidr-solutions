#include <vector>
#include <iostream>

using namespace std;

int basement(const vector<int>& v) {
    int sum = 0;
    for (int i = 0; ; i++) {
        if(i >= v.size())
            return -1;
        sum += v[i];
        if (sum < 0)
            return i;
    }
}

int main() {
    int n, x;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter element number " << i+1 << ": ";
        cin >> x;
        v[i] = x;
    }
    int result = basement(v);
    if(result == -1)
        cout << "No such index found";
    else
        cout << "The first basement index is: " << result;
    return 0;
}