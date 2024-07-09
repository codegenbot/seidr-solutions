#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> incr_list(vector<int> l){
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    vector<int> original = {1, 2, 3, 4, 5};
    vector<int> modified = incr_list(original);
    
    if(issame(original, modified)){
        std::cout << "Lists are the same after incrementing." << std::endl;
    } else {
        std::cout << "Lists are different after incrementing." << std::endl;
    }
    
    return 0;
}