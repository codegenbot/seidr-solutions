#include <vector>
using namespace std;

int luhnCheck(vector<int> numbers) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = numbers.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int digit = numbers[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
            doubleNext = false;
        } else {
            sum += numbers[i];
            doubleNext = true;
        }
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << luhnCheck(numbers) << endl;
    return 0;
}