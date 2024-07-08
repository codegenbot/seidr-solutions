#include <iostream>
#include <vector>

using namespace std;

bool has_close_elements(vector<double> numbers, double threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<double> a;
    
    for (int i = 0; i < n; i++) {
        double num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        a.push_back(num);
    }
    
    double threshold;
    cout << "Enter the threshold: ";
    cin >> threshold;
    
    if (has_close_elements(a, threshold)) {
        cout << "The array contains close elements." << endl;
    } else {
        cout << "The array does not contain close elements." << endl;
    }
}