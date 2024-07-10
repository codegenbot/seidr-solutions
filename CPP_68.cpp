```cpp
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size())return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int smallestEven = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }

    result.push_back(smallestEven);
    result.push_back(index);

    return result;
}

int main() {
    std::vector<int> input = {1, 3, 2};
    std::cout << "Input: ";
    for(int i=0; i<input.size();i++)std::cout<<input[i]<<" ";
    std::cout<<'\n';
    
    std::vector<int> output = pluck(input);
    if(output[0]%2==0)std::cout<<"The smallest even number is: "<<output[0]<<", and it's located at index: "<<output[1]<<".\n";
    else std::cout<<"There are no even numbers in the array.\n";

    return 0;
}