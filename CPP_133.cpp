```cpp
#include <iostream>
#include <vector>

using namespace std;

long long sum_squares(const vector<float>& lst){
    long long total = 0;
    for(float x : lst){
        total += lround(x) * lround(x);
    }
    return total;
}

int main() {
    vector<float> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        float x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        lst.push_back(x);
    }

    long long total = sum_squares(lst);
    cout << "Sum of squares: " << total << endl;
}