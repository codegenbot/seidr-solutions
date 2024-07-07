#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int, int, int> coinSum(int cents) {
    int quarterCount = 0;
    int dimeCount = 0;
    int nickelCount = 0;
    int pennyCount = 0;

    while (cents >= 25) {
        quarterCount++;
        cents -= 25;
    }
    
    while (cents >= 10) {
        dimeCount++;
        cents -= 10;
    }

    while (cents >= 5) {
        nickelCount++;
        cents -= 5;
    }

    while (cents > 0) {
        pennyCount++;
        cents--;
    }

    return make_tuple(quarterCount, dimeCount, nickelCount, pennyCount);
}

int main() {
    int cents;
    cin >> cents;

    auto counts = coinSum(cents);
    
    cout << get<0>(counts) << endl;
    cout << get<1>(counts) << endl;
    cout << get<2>(counts) << endl;
    cout << get<3>(counts) << endl;

    return 0;
}