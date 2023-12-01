#include <vector>

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

bool issame(vector<int> a, vector<int> b){
    // Your code for comparing two vectors goes here
}

int main() {
    // Your test cases go here
    assert (issame(make_a_pile(8) , {8, 10, 12, 14, 16, 18, 20, 22}));
}