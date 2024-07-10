#include <vector>
using namespace std;

int calculateFuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = floor(result) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int &i : vec)
        cin >> i;
    cout << calculateFuelCost(vec) << endl;
    return 0;
}