```c++
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> seen;
    std::vector<int> result;

    for(int i : numbers) {
        if(seen.insert(i).second) { // check if insert was successful
            result.push_back(i);
        }
    }

    return result;
}