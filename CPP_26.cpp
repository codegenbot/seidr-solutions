```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) != result.end()){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    vector<int> numbers(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> numbers[i];
    }

    vector<int> result = remove_duplicates(numbers);

    if (isSame(result, numbers)) {
        std::cout << "The resulting vector is the same as the original." << std::endl;
    } else {
        std::cout << "The resulting vector is different from the original." << std::endl;
    }

    return 0;
}