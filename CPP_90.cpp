#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < sorted.size()-1; i++){
        if(sorted[i] != sorted[i+1]) return sorted[i+1];
    }
    return -1; 
}

int main() {
    std::vector<int> lst = {7,4,3};
    int result = next_smallest(lst);
    if(result == -1) std::cout << "No smaller number found.\n";
    else std::cout << "The next smallest number is: " << result << "\n";
    return 0;
}