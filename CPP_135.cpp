#include <vector>
#include <cassert>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) return i - 1;
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    std::vector<int> v = {3,4,5};
    int result = can_arrange(v);
    if(result == -1) 
        cout << "The array is already sorted." << endl; 
    else
        cout << "The array can be arranged in increasing order by reversing the " << result << "th element." << endl;
}