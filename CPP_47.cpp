#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

double median(std::vector<int> l){
    // sorting the vector
    std::sort(l.begin(), l.end());
    
    int n = l.size();
    
    if(n % 2 == 0){
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    }
    else{
        return l[n / 2];
    }
}

int main(){
    std::vector<int> l = {3, 7, 1, 5, 4, 6, 2};
    
    double result = median(l);
    
    std::cout << "Median: " << result << std::endl;
    
    return 0;
}