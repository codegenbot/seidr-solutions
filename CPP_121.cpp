#include <vector>
using namespace std;

int solutions(vector<int> lst) {
    return solve(lst);
}

int solve(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0 && lst[i] != 0) { 
            sum += lst[i];
        }
    }
    
    return sum;
}

int main() {
    assert(solutions({3, 13, 2, 9}) == 13); 
    return 0;
}