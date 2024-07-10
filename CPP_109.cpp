#include <vector>
#include <algorithm>

bool move_one_ball(std::vector<int> arr) {
    int max = *std::max_element(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != max - i) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    std::vector<int> test1 = {1,2,3};
    for(int i = 0; i < test1.size(); i++) {
        if(test1[i] != i+1) {
            test1.clear();
            break;
        }
    }
    assert(move_one_ball(test1) == false);
    
    std::vector<int> test2 = {4,3,2,1};
    for(int i = 0; i < test2.size(); i++) {
        if(test2[i] != 5-i) {
            test2.clear();
            break;
        }
    }
    assert(move_one_ball(test2) == true);
    
    return 0;
}