#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array){
    int sum = 0;
    for(int i=0; i<array.size();i++){
        sum += array[i];
    }
    if(sum % 2 == 0)
        return array;
    else
        std::reverse(array.begin(), array.end());
    return array;
}