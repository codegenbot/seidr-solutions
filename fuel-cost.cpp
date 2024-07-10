#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        int result = (number / 3);
        result = floor(result);
        result -= 2;
        total += result;
    }
    return total;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}