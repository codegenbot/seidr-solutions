#include <vector>
#include <cassert>

bool is_sorted(std::vector<int> lst){
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    
    for(int i = 0; i < sorted_lst.size() - 1; i++){
        if(sorted_lst[i] == sorted_lst[i+1]){
            return false;
        }
    }
    
    return lst == sorted_lst;
}

int main() {
    assert (is_sorted({1, 2, 3, 4}) == true);
    // Add more test cases here
    
    return 0;
}