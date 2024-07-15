#include <vector>
#include <string>
#include <iostream>

using namespace std;

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

int main() {
    int number = 12345;
    std::vector<int> counts = even_odd_count(number);

    cout << "Even count: " << counts[0] << endl;
    cout << "Odd count: " << counts[1] << endl;

    return 0;
}