#include <vector>
#include <iostream>

using namespace std;

long long solution(vector<int> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    if (solution({3, 13, 2, 9}) == 3) {
        cout << "Test case passed" << endl;
    } else {
        cout << "Test case failed" << endl;
    }
    return 0;
}