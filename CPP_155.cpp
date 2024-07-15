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
    int num;
    cout << "Enter a number: ";
    cin >> num;

    vector<int> count = even_odd_count(num);

    cout << "Number of even digits: " << count[0] << endl;
    cout << "Number of odd digits: " << count[1] << endl;

    return 0;
}