#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> eat(int number, int need, int remaining){
    int total = number + need;
    int eaten = min(total, remaining);
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert (issame(eat(4, 5, 1), {5, 0}));

    return 0;
}