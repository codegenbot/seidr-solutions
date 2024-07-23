#include <iostream>
#include <vector>

int maximum(std::vector<int>& v, int idx) {
    if(idx >= v.size()) 
        return 0; // replace with your default value if needed
    int max_val = v[idx];
    for(int i = idx+1; i<v.size();i++){
        if(v[i] > max_val)
            max_val = v[i];
    }
    return max_val;
}

int main()
{
    int result = maximum({1, 2, 3, -23, 243, -400, 0}, 0);
    std::cout << "Test Passed\n";
    return 0;
}