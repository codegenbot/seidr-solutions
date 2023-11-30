#include <vector>

vector<int> make_a_pile(int n);
bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
    // implementation here
}

vector<int> make_a_pile(int n){
    vector<int> levels;
    int stones = n;
    levels.push_back(stones);
    
    for(int i = 1; i < n; i++){
        if(stones % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    
    return levels;
}

int main(){
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}