#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = floor(result) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i<n; i++) {
        cin >> numbers[i];
    }
    cout << fuelCost(numbers) << endl;
    return 0;
}