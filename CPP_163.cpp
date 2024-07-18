#include <vector>
#include <cassert>

vector<int> generate_integers(int a, int b);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return  true; 
}

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<int> test1 = generate_integers(1, 10);
    vector<int> test2 = generate_integers(2, 12);
    
    assert(issame(test1, test2) == false);
    
    return 0;
}