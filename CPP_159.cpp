#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> eat(int number, int need, int remaining){
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? remaining : totalCarrots;
    int carrotsLeft = remaining - eatenCarrots;
    return {eatenCarrots, carrotsLeft};
}

int main(){
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}