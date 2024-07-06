#include <vector>
#include <set>
#include <initializer_list>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> removeDuplicates(std::initializer_list<int> numbers) {
    std::set<int> result;
    for(auto i : numbers){
        if(result.insert(i).second){
            result.insert(i); 
        }
    }
    return std::vector<int>(result.begin(), result.end());
}

int main() {
    assert(isSame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
}