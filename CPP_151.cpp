#include <iostream>
using namespace std;

int main() {
    vector<float> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i<n; i++) {
        float num;
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        lst.push_back(num);
    }
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}