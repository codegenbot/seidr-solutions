#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
        if (sum < 0)
            return i;
    }
    return -1; // no negative index found
}

int main() {
    int numElements;
    cin >> numElements;

    vector<int> numbers(numElements);
    for (int i = 0; i < numElements; ++i) {
        cin >> numbers[i];
    }

    cout << findFirstNegativeIndex(numbers) << endl;
    return 0;
}