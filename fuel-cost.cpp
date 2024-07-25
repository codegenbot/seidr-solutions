#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = min(result, 0);
        total += result - 2;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << fuelCost(numbers) << endl;
    return 0;
}