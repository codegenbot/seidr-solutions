#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float median(vector<float> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    if (n == 0) return 0.0; 
    float med;
    if (n % 2 == 0) {
        med = (l[n / 2 - 1] + l[n / 2]) / 2.0;
    } else {
        med = l[n / 2];
    }
    return med;
}

int testMedian() {
    vector<float> numbers;
    cout << "Enter the numbers (enter 'stop' to finish): ";
    string input;
    while (true) {
        cin >> input;
        if (input == "stop") break;
        float num = stof(input);
        numbers.push_back(num);
    }
    float result = median(numbers);
    cout << "The median of the given numbers is: " << result << endl;
    return 0;
}