#include <vector>
#include <iostream> 

using namespace std;

int basement(const vector<int>& v) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += v[i];
        if (sum < 0)
            return i+1; // return the first index where the sum becomes negative
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