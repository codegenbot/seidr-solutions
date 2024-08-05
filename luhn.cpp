#include <vector>
using namespace std;

int luhn(const vector<int>& card) {
    int sum = 0;
    bool alt = false;

    for (auto i = card.rbegin(); i != card.rend(); ++i) {
        if (!alt) {
            sum += *i;
        } else {
            int temp = *i * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        }
        alt = !alt;
    }

    return sum;
}