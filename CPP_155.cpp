#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

// Function declaration for even_odd_count
vector<int> even_odd_count(int n);

int main(){
    // Add your test cases here
    assert (issame(even_odd_count(0), {1, 0}));

    return 0;
}