#include <vector>
#include <initializer_list>
#include <iostream> 
#include <assert.h>

int solutions(std::vector<int> lst) {
    if (lst.size() == 0) {
        return -1;
    }
    int count = 0;
    for(int i=0; i<lst.size();i++){
        if(lst[i]%2==0) count++;
    }
    return count; 
}

int main() {
    std::vector<int> lst = {3, 13, 2, 9};
    int result = solutions(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}