#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int maxSoFar = INT_MIN;
    
    for(int i=0; i<numbers.size(); i++){
        maxSoFar = max(maxSoFar, numbers[i]);
        rollingMax.push_back(maxSoFar);
    }
    
    return rollingMax;
}

vector<int> broadcast(vector<int> input){
    vector<int> result;
    
    for(int i=0; i<input.size()-1; i++){
        int current = input[i];
        int next = input[i+1];
        
        int diff = next - current;
        
        if(diff > 0){
            result.push_back(1);
        }else if(diff < 0){
            result.push_back(-1);
        }else{
            result.push_back(0);
        }
    }
    
    return result;
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    
    return 0;
}