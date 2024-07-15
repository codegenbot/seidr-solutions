#include <vector>
#include <cmath>
#include <initializer_list>
#include <iostream>

using namespace std;

int fuelCost(initializer_list<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = static_cast<int>(floor(double(i)/3));
        result -= 2; 
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> vec = {1, 2, 3};
    int result = fuelCost(vec);
    cout << "Result: " << result << endl;
    return 0;
}