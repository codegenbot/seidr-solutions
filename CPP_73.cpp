#include <vector> 
#include <cassert> 

int smallest_change(const std::vector<int>& arr){ 
    int changes = 0;
    for (size_t i = 0; i < arr.size() / 2; ++i) { 
        if (arr[i] != arr[arr.size() - 1 - i]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    assert(smallest_change({0, 1}) == 1); 
    return 0;
}