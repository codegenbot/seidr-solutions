#include <iostream>
#include <vector>

using namespace std;

int solution(const vector<int>& lst) {
    int sum = 0;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        if (*it % 2 == 1 && *it % 2 != 0) {
            sum += *it;
        }
    }
    return sum;
}

int main() {
    vector<int> lst{3, 13, 2, 9};
    int result = solution(lst);
    cout << "The sum of odd numbers is: " << result << endl;
    return 0;
}