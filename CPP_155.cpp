#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

void task_main() {
    assert(even_odd_count(0) == std::vector<int>{1, 0});
    assert(even_odd_count(123456) == std::vector<int>{3, 3});
    assert(even_odd_count(-87654) == std::vector<int>{2, 3});
}

int main() {
    task_main();
    cout << "Enter a number: ";
    int num;
    cin >> num;
    
    vector<int> result = even_odd_count(num);
    cout << "Number of even digits: " << result[0] << ", Number of odd digits: " << result[1] << endl;

    return 0;
}