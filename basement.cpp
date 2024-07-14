Here is the solution:

#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1; // not found
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        input.push_back(num);
    }
    int result = findFirstNegativeIndex(input);
    cout << result << endl;
    return 0;
}