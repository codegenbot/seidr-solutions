#include <vector>
#include <cassert>

int solutions(vector<int> lst){
    int sum = 0;
    for(int i = 0; i < lst.size(); i += 2){
        if(lst[i] % 2 != 0){
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(solutions({1, 2, 3, 4, 5}) == 9);
    assert(solutions({2, 4, 6, 8, 10}) == 0);
    assert(solutions({1, 3, 5, 7, 9}) == 15);

    return 0;
}