#include <vector>

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> lst.push_back(i);
    }
    cout << "Sum of digits in the largest prime number is: " << skjkasdkd(lst) << endl;
    return 0;
}