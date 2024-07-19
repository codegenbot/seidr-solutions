#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateMedian(vector<float> numbers) {
    int n = numbers.size();
    sort(numbers.begin(), numbers.end());
    
    if (n % 2 == 0)
        return (numbers[n/2 - 1] + numbers[n/2]) / 2;
    else
        return numbers[n/2];
}

int mainFunction() {
    vector<float> numbers;
    float num;

    while (cin >> num) {
        numbers.push_back(num);
    }

    if (!numbers.empty())
        cout << calculateMedian(numbers) << endl;

    return 0;
}