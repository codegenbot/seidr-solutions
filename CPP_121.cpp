#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int solutions(vector<int> lst) {
    assert (solution({3, 13, 2, 9}) == 3);
    return 0;
}

int main() {
    solutions({3, 13, 2, 9});
    return 0;
}