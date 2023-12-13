```cpp
#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(const std::vector<float>& lst){
    int sum = 0;
    for(int i=0; i<lst.size(); i++){
        int rounded = ceil(lst[i]);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    using namespace std;

    // Test the sum_squares function
    assert(sum_squares({-1,1,0}) == 2);

    return 0;
}
```