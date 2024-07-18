#include <vector>
#include <cassert>

bool std::vector<int>::issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < b.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> generate_integers(int start, int end){
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

int main(){
    assert (std::vector<int>::issame(generate_integers(17, 89), {}));
    return 0;
}