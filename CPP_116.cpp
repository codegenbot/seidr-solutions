#include <vector> 
using namespace std; 
vector<int> sort_array(vector<int> arr){ 
    sort(arr.begin(), arr.end(), [](int a, int b){ 
        int countA = __builtin_popcount(a); 
        int countB = __builtin_popcount(b); 
        if(countA == countB){ 
            return a < b; 
        } 
        return countA < countB; 
    }); 
    return arr; 
} 
bool issame(vector<int> a, vector<int> b){ 
    // Implementation of the issame() function 
} 
int main(){ 
    assert(issame(sort_array({2,4,8,16,32}), {2, 4, 8, 16, 32})); 
    return 0; 
}