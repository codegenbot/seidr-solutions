// Add missing includes
#include <climits> 

// Change the function definition to use std::vector explicitly
bool issame(std::vector<int> a, std::vector<int> b){
        return a == b;
}

// Modify the main function to avoid redefining it
int main(){
        assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
        return 0;
}