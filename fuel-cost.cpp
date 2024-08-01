#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> inputs;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        inputs.push_back(num);
    }
    cout << calculateFuelCost(inputs) << endl;
    return 0;
}