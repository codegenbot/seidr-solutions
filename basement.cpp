#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& numbers) {
    int sum = 0;
    int index = -1;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        if (sum < 0) {
            return i;
        }
    }
    return index;
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