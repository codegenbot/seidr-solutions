#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

bool count_up_to(int num1, int num2) {
    return num1 >= 0 && num1 <= num2;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}