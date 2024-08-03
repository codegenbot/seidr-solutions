#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        int result = (num / 3);
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
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
    
    cout << std::fixed << std::setprecision(0) << fuelCost(input) << std::endl;
    
    return 0;
}