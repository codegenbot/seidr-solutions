#include <vector>
#include <unordered_map>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> map;
    std::vector<int> result;

    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
            result.push_back(num);
        }
    }

    return result;

}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements (space separated): ";
    for(int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    
    std::vector<int> output = remove_duplicates(input);
    
    std::cout << "The numbers without duplicates: ";
    for (int i = 0; i < output.size(); ++i) {
        std::cout << output[i] << " ";
    }
    return 0;
}