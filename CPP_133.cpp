```cpp
#include <vector>
#include <cmath>

using namespace std;

int sum_squares(vector<float> lst){
    int result = 0;
    for(float x : lst){
        int ceil_x = ceil(x);
        result += pow(ceil_x, 2);
    }
    return result;
}

int main() {
    assert(sum_squares({-1,1,0})==2);
    return 0;
}