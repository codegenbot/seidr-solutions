#include <vector>
#include <cmath>
#include <initializer_list>

using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double result = static_cast<double>(i)/3;
        int newResult = lround(result);
        newResult -= 2; 
        sum += newResult;
    }
    return sum;
}

int main() {
    vector<int> vec = {1, 2, 3};
    int result = fuelCost(vec);
    cout << "Result: " << result << endl;
    return 0;
}