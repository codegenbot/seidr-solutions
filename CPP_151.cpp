#include <cassert>
#include <vector>

long double_the_difference(const std::vector<int>& input) {
    long average = 0;
    for (int num : input) {
        average += num;
    }
    return static_cast<long>(average * average);
}

int main() {
    std::vector<int> lst = {1,2,3};
    int sum = 0; 
    for(int i: lst){
        if(i%2 != 0)sum+=i;
    }
    assert(double_the_difference(lst) == sum); 
}