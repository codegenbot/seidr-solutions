#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3;
        x = floor(x);
        x -= 2;
        sum += x;
    }
    return sum;
}

int main() {
    vector<int> vec; 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    cout << fuelCost(vec) << endl;
    return 0;
}