#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

std::vector<int> largest_smallest_integers(std::vector<int> arr) {
    int largest = arr[0];
    int smallest = arr[0];

    for(int num : arr) {
        if(num > largest)
            largest = num;
        if(num < smallest)
            smallest = num;
    }

    return {largest, smallest};
}

int main() {
    assert(issame({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {1, -100}));

    return 0;
}