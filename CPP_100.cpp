#include <vector>

using namespace std;

vector<int> make_a_pile(int n){
    vector<int> pile;
    int stones = n;
    pile.push_back(stones);
    
    for(int i=1; i<n; i++){
        if(n%2 == 0){ // if n is even
            stones += 2;
        } else { // if n is odd
            stones += 1;
        }
        pile.push_back(stones);
    }
    
    return pile;
}

bool issame(vector<int> a, vector<int> b){
    // function implementation
}

int main() {
    vector<int> make_a_pile(int n);  // declare make_a_pile function

    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));

    return 0;
}