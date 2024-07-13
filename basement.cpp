#include <vector>
using namespace std;

int findFirstNegative(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        if (sum < 0)
            return i;
    }
    return -1;
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
    cout << findFirstNegative(input) << endl;
    return 0;
}