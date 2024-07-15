#include <vector>
#include <string>
using namespace std;

std::vector<int> countEvenOddDigits(int num) {
    std::vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    int num;
    cin >> num;
    std::vector<int> result = countEvenOddDigits(num);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}