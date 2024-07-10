#include <vector>
#include <iostream>

using namespace std;

int sum_squares(vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) {
            total += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) {
            total += lst[i] * lst[i] * lst[i];
        }
    }
    return total;
}

int main(int argc, char* argv[]) {
    vector<int> numbers;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    numbers.resize(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    cout << "Sum of squares: " << sum_squares(numbers) << endl;
    return 0;
}