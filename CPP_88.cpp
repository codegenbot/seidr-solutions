#include <vector>
#include <algorithm>

bool isSumOdd(int first, int last) {
    return (first + last) % 2 != 0;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if(array.size() < 2) return sorted_array;
    
    if(isSumOdd(array.front(), array.back())) {
        std::sort(sorted_array.begin(), sorted_array.end());
    } else {
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    }
    
    return sorted_array;
}