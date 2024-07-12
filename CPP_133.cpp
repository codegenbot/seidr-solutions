#include <vector>

using namespace std;

int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += ceil(x)*ceil(x);
    }
    return total;
}

int main(){
    assert(sum_squares({-1,1,0})==2);
}