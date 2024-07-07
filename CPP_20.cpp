```cpp
#include <algorithm>
#include <numeric>
#include<vector>

bool areEqual(std::vector<float> a,std::vector<float>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair.first = numbers[i];
            closest_pair.second = numbers[i + 1];
        }
    }

    return {closest_pair.first, closest_pair.second};
}

int main() {
    std::vector<float> input;
    // Read input from user
    float num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    
    std::vector<float> result = find_closest_elements(input);

    // Check if the vector contains duplicate elements
    bool isDuplicate = areEqual(result, {result[0], result[1]});

    return 0;
}