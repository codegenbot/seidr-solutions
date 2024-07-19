#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

void sort_array(std::vector<int>& array){
    if(array.empty()) return;
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0)
        sort(array.rbegin(), array.rend());
    else
        sort(array.begin(), array.end());
}

int main(){
    std::vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    std::vector<int> expected_output = {1, 1, 2, 3, 3, 4, 5, 5, 6, 9};

    sort_array(input);

    if(issame(input, expected_output))
        std::cout << "Output is correct";
    else
        std::cout << "Output is incorrect";

    return 0;
}