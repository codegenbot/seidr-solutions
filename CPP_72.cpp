#include <vector>
#include <algorithm>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for(int i:q){
        sum+=i;
    }
    return sum <= w && (q == vector<int>(q.begin(), q.end()));
}

int main() {
    assert(will_it_fly({5}, 5) == true);
}