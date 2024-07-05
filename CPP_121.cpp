#include <vector> 
#include <cassert> 

using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for(int i = 0; i < lst.size(); i += 2) {
        if(lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(solutions({3, 13, 2, 9}) == 3);
    assert(solutions({1, 2, 3, 4, 5, 6}) == 9);
    assert(solutions({2, 4, 6, 8}) == 0);
    assert(solutions({7, 3, 5, 1, 9}) == 21);
    return 0;
}