#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers;
    int n;
    while (!cin.eof()) {
        cin >> n;
        numbers.push_back(n);
    }

    int sum = 0;
    for (int num : numbers) {
        sum += max(0, num / 3 - 2);
    }

    cout << sum << endl;

    return 0;
}