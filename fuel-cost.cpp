#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int newNum = (num / 3) - 2;
        total += newNum;
    }
    return total;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        input.push_back(num);
    }
    cout << calculateFuelCost(input) << endl;
    return 0;
}