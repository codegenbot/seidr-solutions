#include <iostream>
#include <vector>
using namespace std;

int luhn(vector<int> numbers) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i : numbers) {
        if (doubleNext) {
            i *= 2;
            if (i > 9) {
                i -= 9;
            }
        }
        sum += i;
        doubleNext = !doubleNext;
   }
    
    return sum;

}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    cout << luhn(numbers) << endl;
    return 0;
}