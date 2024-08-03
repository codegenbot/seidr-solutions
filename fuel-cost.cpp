#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        int result = static_cast<int>(floor(double(num) / 3));
        result = max(0, result - 1);
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
    
    cout << fuelCost(input) << std::endl;
    
    return 0;
}