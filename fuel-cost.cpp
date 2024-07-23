```cpp
#include <vector>
#include <cmath>

using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = static_cast<double>(i) / 3; 
        sum += static_cast<int>(floor(temp)) - 2; 
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    while (true) {
        cout << "Enter the number of integers to process (0 to finish): ";
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; ++i) {
            cout << "Enter integer #"<< i+1 << ": ";
            int num;
            cin >> num;
            input.push_back(num);
        }
    }
    int output = fuelCost(input);
    cout << "The total fuel cost is: " << output << endl;
    return 0;
}