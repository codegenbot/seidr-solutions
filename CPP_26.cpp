```
#include <vector>
#include <algorithm>

bool areVectorsEqual(const std::vector& a, const std::vector& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector remove_duplicates(std::vector numbers){
    std::vector result;

    for(int i : numbers) {
        if(find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }

    return result;
}