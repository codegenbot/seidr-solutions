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
        bool unique = sameVectors(result, std::vector<int>({i}));
        if(unique) {
            result.push_back(i);
        }
    }

    return result;
}