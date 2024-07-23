#include <vector>
#include <unordered_map>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    unordered_map<int, bool> map;
    vector<int> result;

    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    std::vector<int> v1 = {1, 2, 3, 4};
    std::vector<int> v2 = {1, 2, 3, 4};

    if (issame(v1, v2))
        std::cout << "Vectors are same." << std::endl;
    else
        std::cout << "Vectors are not same." << std::endl;

    return 0;
}