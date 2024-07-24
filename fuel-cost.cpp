#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int temp = (num / 3);
        temp = (temp > 0 ? temp - 1 : 0); // round down to nearest integer
        sum += temp;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    cout << calculateFuelCost(numbers) << endl;

    return 0;
}