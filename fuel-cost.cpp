#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int temp = (num / 3);
        temp = temp - 2;
        sum += temp;
    }
    return sum;
}

int main() {
    int n;
    vector<int> numbers;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    cout << fuelCost(numbers) << endl;

    return 0;
}