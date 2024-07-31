```
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

float median(vector<float> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0)
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    else
        return l[n/2];
}

int main() {
    vector<float> numbers;

    cout << "Enter some numbers (enter 3.0 to finish): ";
    float num;

    while (true) {
        cin >> num;
        if (cin.fail()) break; 
        if (num == 3.0f) break;
        numbers.push_back(num);
    }

    if (!numbers.empty()) {
        cout << "Median: " << median(numbers) << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
}