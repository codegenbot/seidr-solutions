#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n){
    vector<int> piles;
    int stones = n;
    for(int i = 0; i < n; i++){
        piles.push_back(stones);
        if(n % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return piles;
}

bool issame(vector<int> a, vector<int> b){
   // Your implementation here
}

int main() {
   assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
   return 0;
}