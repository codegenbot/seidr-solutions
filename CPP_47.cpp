#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float median(vector<float> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    } else {
        return l[n / 2];
    }
}

int main() {
    vector<float> numbers;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        float x;
        cout << "Enter element " << (i+1) << ": ";
        cin >> x;
        numbers.push_back(x);
    }
    
    float result = median(numbers);
    cout << "The median of the given numbers is: " << result << endl;
    return 0;
}