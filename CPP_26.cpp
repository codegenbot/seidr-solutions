#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>

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

vector<string> remove_duplicates(vector<int> numbers) {
    unordered_set<string> seen;
    vector<string> result;
    for(int num : numbers){
        if(seen.insert(to_string(num)).second){
            result.push_back(to_string(num));
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

    vector<string> result = remove_duplicates(numbers);

    if (isSame(result, vector<int>(numbers.begin(), numbers.end()))){
        std::cout << "The resulting vector is the same as the original." << std::endl;
    } else {
        std::cout << "The resulting vector is different from the original." << std::endl;
    }

    return 0;
}