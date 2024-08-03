#include <vector>
using namespace std;

int luhnCheck(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if ((i % 2 == 1)) {
            int doubleNumber = numbers[i] * 2;
            if (doubleNumber > 9) {
                doubleNumber -= 9;
            }
            sum += doubleNumber;
        } else {
            sum += numbers[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << luhnCheck(numbers) << endl;
    return 0;
}