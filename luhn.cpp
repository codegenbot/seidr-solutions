#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i : digits) {
        if (doubleNext) {
            int doubled = i * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += i;
            doubleNext = true;
        }
    }
    
    return sum;

int main() { return 0; }