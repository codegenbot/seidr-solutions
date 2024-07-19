#include <vector>
bool issame(vector<int> a,vector<int> b){
    return a == b;
}
int main() {
    assert (issame(make_a_pile(15), {1,3,5,7,9,11,13,15})); 
    return 0;
}