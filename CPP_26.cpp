#include <vector>
#include <algorithm>

bool sameVectors(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    
    for(int i : numbers) {
        bool already_exists = false;
        
        for(int j : result) {
            if(i == j) {
                already_exists = true;
                break;
            }
        }
        
        if(!already_exists) {
            result.push_back(i);
        }
    }
    
    return result;
}