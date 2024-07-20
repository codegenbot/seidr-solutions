#include <vector>
using namespace std;

int luhn(const vector<int>& numbers) {
    int sum = 0;
    bool alternate = false;

    for (int number : numbers) {
        if (alternate) {
            number *= 2;
            if (number > 9) {
                number -= 9;
            }
        }

        sum += number;
        alternate = !alternate;
    }

    return sum;
}