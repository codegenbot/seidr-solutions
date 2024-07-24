#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &numbers) {
    int sum = 0;
    for (int num : numbers) {
        int divided = num / 3;
        int result = floor(divided) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> input;
    int n, temp;
    cin >> n;
    while(n--) {
        cin >> temp;
        input.push_back(temp);
    }
    cout << calculateFuelCost(input) << endl;
    return 0;
}