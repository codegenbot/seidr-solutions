#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers){
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> numbers = {1, 2, 5, 2, 3, 1, 7, 5, 3};
    numbers = remove_duplicates(numbers);

    for(const auto& num : numbers){
        cout << num << " ";
    }
    
    return 0;
}