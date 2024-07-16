#include <vector>
#include <algorithm>

std::vector<int> issame(int a, std::vector<int> b){
    std::vector<int> result;
    while(a != 1){
        if(a % 2 == 1)
            result.push_back(a);
        a = (a % 2 == 0) ? a / 2 : 3 * a + 1;
    }
    result.push_back(1);
    std::sort(result.begin(), result.end());
    return result;
}