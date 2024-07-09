#include <iostream>
#include <vector>

using namespace std;

bool has_close_elements(vector<float> numbers, float threshold) {
    for (int i = 1; i < numbers.size(); i++) {
        if (abs(numbers[i] - numbers[i-1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<float> a;
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    a.resize(n);
    
    cout << "Enter the elements: ";
    for (float &num : a) {
        cin >> num;
    }
    
    float threshold;
    cout << "Enter the threshold value: ";
    cin >> threshold;
    
    cout << (has_close_elements(a, threshold) ? "True" : "False") << endl;
    return 0;
}