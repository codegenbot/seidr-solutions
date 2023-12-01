#include <vector>

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> make_a_pile(int n){
    vector<int> pile;
    pile.push_back(n);
    for(int i=1; i<n; i++){
        if(n%2 == 0){
            pile.push_back(n + 2*i);
        }
        else{
            pile.push_back(n + 2*i - 1);
        }
    }
    return pile;
}

int main(){
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}