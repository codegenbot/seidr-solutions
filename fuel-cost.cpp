#include <vector>
#include <iostream>

using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        int result = (num / 3);
        result = (result > 0)? result - 2: 0;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        input.push_back(num);
    }
    cout << fuelCost(input) << endl;
    return 0;
}