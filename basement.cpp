#include <vector>
using namespace std;

int basement(const vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> numbers = {1, -2, 3, -4};
    int result = basement(numbers);
    cout << "Basement index: " << result << endl;
    return 0;
}