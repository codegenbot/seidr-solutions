#include <iostream>
#include <vector>

int maximum(std::vector<int>& v, int idx) {
    if(idx >= v.size()) return 0;
    int max_val = v[idx];
    for(int i = idx+1; i<v.size();i++){
        if(v[i] > max_val)
            max_val = v[i];
    }
    return max_val;
}

bool issame(std::vector<int>& a, std::vector<int>& b) {
    if(a.size() != b.size()) 
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::vector<int> input({1, 2, 3, -23, 243, -400, 0});
    std::vector<int> output;

    if(issame(input, output)) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }
    
    int max_val = maximum(input, 0);
    std::cout << "The maximum value in the array is: ";
    std::cout << max_val;
    return 0;
}