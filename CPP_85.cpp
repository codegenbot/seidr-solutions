#include <vector>
#include <numeric>

using namespace std;

int add(vector<int> lst) {
    return accumulate(ist.begin(), ist.end(), 0,
        [this](int acc, int val){ 
            if ((val % 2 == 0) && (find(ist.begin(), ist.end(), val) - ist.begin() & 1)) 
                return acc + val; 
            return acc; } );
}