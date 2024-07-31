#include <vector>
#include <cassert>

using namespace std;

int solve(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0 && lst[i] != 0) { 
            sum += lst[i];
        }
    }
    
    return sum;
}

int main(vector<int> lst) {
    return solutions(lst);
}