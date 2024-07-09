#include <vector>
#include <set>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> removeDuplicates(const std::vector<int>& numbers) {
    std::set<int> uniqueNumbers(numbers.begin(), numbers.end());
    return std::vector<int>(uniqueNumbers.begin(), uniqueNumbers.end());
}

int main() {
    int n;    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    using namespace std;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    vector<int> uniqueNumbers = removeDuplicates(numbers);
    
    if (!same(numbers, uniqueNumbers)) {
        cout << "Unique numbers: ";
        for (int num : uniqueNumbers) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "All elements are duplicates." << endl;
    }
    
    assert(same(removeDuplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 4, 5}));
    return 0;
}