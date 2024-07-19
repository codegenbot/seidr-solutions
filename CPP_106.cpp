#include <vector>  // Add this line to include the vector library

bool issame(std::vector<int> a, std::vector<int> b){  // Fix the function signature
    if(a.size() != b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}