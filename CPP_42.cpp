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
    vector<int> input = {1, 2, 3, 4};
    vector<int> modified = incr_list(input);
    
    if (issame(input, modified)) {
        std::cout << "The input and modified vectors are the same." << std::endl;
    } else {
        std::cout << "The input and modified vectors are different." << std::endl;
    }
    
    return 0;
}