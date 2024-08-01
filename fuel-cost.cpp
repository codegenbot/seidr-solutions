#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        int result = (number / 3) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    cout << calculateFuelCost(numbers) << endl;

    return 0;
}