#include <vector>

std::vector<int> leaders(std::vector<int>& v) {
    int n = v.size();
    std::vector<int> leaders;
    
    int max_right = v[n-1];
    for(int i=n-2; i>=0; i--){
        if(v[i] >= max_right){
            leaders.push_back(v[i]);
            max_right = v[i];
        }
    }
    
    return leaders;
}

int main() {
    std::vector<int> v = {1, 3, 4, 1, 5};
    std::vector<int> leaders_vec = leaders(v);
    return 0;
}