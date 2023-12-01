#include <vector>
#include <cassert>
#include <limits>
using namespace std;

vector<long long> largest_and_smallest_integers(vector<int> lst){
    long long largest_negative = numeric_limits<long long>::min();
    long long smallest_positive = numeric_limits<long long>::max();
    
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] < 0 && lst[i] > largest_negative){
            largest_negative = lst[i];
        }
        if(lst[i] > 0 && lst[i] < smallest_positive){
            smallest_positive = lst[i];
        }
    }
    
    return {largest_negative, smallest_positive};
}

bool issame(vector<long long> a, vector<long long> b){
    return a == b;
}

int main(){
    assert (issame(largest_and_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    
    return 0;
}