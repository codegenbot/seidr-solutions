#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    // Your existing code for strange_sort_list function
    // Sort elements, alternate adding from both ends
}

int main(){
    // Test the function
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}