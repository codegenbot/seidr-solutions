#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining){
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if(carrotsLeft < 0){
        carrotsLeft = 0;
    }
    vector<int> result = {totalEaten, carrotsLeft};
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b; // Compares if vectors a and b are equal
}

int main(){
    assert(issame(eat(4, 5, 1), {5, 0}));
    // other test cases
    
    return 0;
}