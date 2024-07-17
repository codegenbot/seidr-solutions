#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = (result > 0 ? result - 1 : 0); // round down to nearest integer
        total += result; 
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }

    cout << calculateFuelCost(numbers) << endl;

    return 0;
}