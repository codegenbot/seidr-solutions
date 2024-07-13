#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        if (sum < 0)
            return i;
    }
    return -1; // not found
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << findFirstNegativeIndex(numbers) << endl;
    return 0;
}