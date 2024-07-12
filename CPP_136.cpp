#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {INT_MIN, INT_MAX};
    
    for(int num : lst){
        if(num < 0 && num > result[0]){
            result[0] = num;
        }
        if(num > 0 && num < result[1]){
            result[1] = num;
        }
    }
    
    return result;
}

int main(){
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == vector<int>{-3, 1});
    
    return 0;
}