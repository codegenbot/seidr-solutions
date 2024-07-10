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
    std::vector<int> test1 = {1,2,3,4,5};
    for(int i=0; i<test1.size();i++){
        if(test1[i] != 6-i){
            return 1;
        }
    }
    assert(move_one_ball({1,2,3,4,5}) == true);
    
    std::vector<int> test2 = {1};
    for(int i=0; i<test2.size();i++){
        if(test2[i] != 0){
            return 1;
        }
    }
    assert(move_one_ball({1}) == true);

    std::vector<int> test3 = {5,4,3,2,1};
    for(int i=0; i<test3.size();i++){
        if(test3[i] != 6-i){
            return 1;
        }
    }
    assert(move_one_ball({5,4,3,2,1}) == true);

    std::vector<int> test4 = {5};
    for(int i=0; i<test4.size();i++){
        if(test4[i] != 5){
            return 1;
        }
    }
    assert(move_one_ball({5}) == true);
    
    return 0;
}