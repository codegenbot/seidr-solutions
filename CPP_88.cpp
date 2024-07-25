```cpp
#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}
std::vector<int> sort_array(std::vector<int> array){
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0)
        return array;
    else
        return vector<int>(array.rbegin(), array.rend());
}