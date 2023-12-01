#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0;
    int min_positive = 0;
    
    for(int num : lst){
        if(num < 0 && num < max_negative){
            max_negative = num;
        }
        if(num > 0 && (num < min_positive || min_positive == 0)){
            min_positive = num;
        }
    }
    
    return {max_negative, min_positive};
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    
    return 0;
}