#include <iostream>
#include <vector>
using namespace std;

int next_larger(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < sorted.size()-1; i++){
        if(sorted[i] != sorted[i+1]){
            return sorted[i+1];
        }
    }
    return -1; 
}

int main() {
    assert(next_larger({-35, 34, 12, -45}) == -35);
    return 0;
}