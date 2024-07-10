```cpp
#include <vector>
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

int main() {
    vector<int> numbers;
    numbers.push_back(-1);
    numbers.push_back(-3);
    numbers.push_back(17);
    numbers.push_back(-1);
    numbers.push_back(-15);
    numbers.push_back(13);
    numbers.push_back(-1);
    numbers.push_back(14);
    numbers.push_back(-14);
    numbers.push_back(-12);
    numbers.push_back(-5);
    numbers.push_back(14);
    numbers.push_back(-14);
    numbers.push_back(6);
    numbers.push_back(13);
    numbers.push_back(11);
    numbers.push_back(16);
    numbers.push_back(16);
    numbers.push_back(4);
    numbers.push_back(10);
    cout << sum_squares(numbers) << endl;
    return 0;
}