```
#include <iostream>
#include <vector>
using namespace std;

int calculateMedian(vector<float> v) {
    sort(v.begin(), v.end());
    int n = v.size();
    if (n % 2 == 0)
        return (v[n/2 - 1] + v[n/2]) / 2;
    else
        return v[n/2];
}

int main() {
    vector<float> numbers;
    float num;

    cout << "Enter some floating point numbers. Enter a negative number to stop.\n";
    while (true) {
        cin >> num;
        if (num < 0)
            break;
        numbers.push_back(num);
    }

    if (!numbers.empty()) {
        int median = calculateMedian(numbers);
        cout << "The median is: " << median << endl;
    } else {
        cout << "No numbers entered.\n";
    }
    
    return 0;
}