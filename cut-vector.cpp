#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(const vector<int>& input) {
    int n = input.size();
    if (n <= 1) return vector<int>{0, 0};

    int left = 0, right = n - 1;
    while (left < right && input[left] == input[right]) {
        left++;
        right--;
    }

    if (left >= right) return vector<int>{0, 0};

    int diff = abs(input[left] - input[right]);
    while (left > 0 && input[left - 1] == input[right + 1]) {
        left--;
        right++;
        diff = min(diff, abs(input[left] - input[right]));
    }

    return vector<int>{left, right};
}

int main() {
    vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> result = cutVector(input);
    cout << "Result: " << result[0] << ", " << result[1] << endl;
    return 0;
}