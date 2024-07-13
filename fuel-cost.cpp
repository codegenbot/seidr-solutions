#include <vector>
#include <iostream>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        if (result > 0) {
            result--;
            total += result;
        }
    }
    return total;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    cout << calculateFuelCost(input) << endl;
    return 0;