#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int count;
    cin >> count;

    for (int i = 0; i < count; ++i) {
        int n;
        cin >> n;
        numbers.push_back(n);
    }

    int sum = 0;
    for (int num : numbers) {
        sum += (num / 3) - 2;
    }

    cout << sum << endl;

    return 0;
}