Here is the completed code:

#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &numbers) {
    int total = 0;
    for (auto num : numbers) {
        total += ((num / 3) - 2);
    }
    return total;
}

int main() {
    vector<int> numbers;
    int n, val;
    
    // Read input
    cin >> n;
    while(n--) {
        cin >> val;
        numbers.push_back(val);
    }

    cout << calculateFuelCost(numbers) << endl;

    return 0;
}