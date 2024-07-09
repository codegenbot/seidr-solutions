#include <vector>
bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(eat(4, 5, 1) == vector<int>({9,0}));
    //... 
}