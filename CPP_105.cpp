#include <vector>
#include <map>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    std::vector<std::string> result;
    std::map<int, std::string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"},
                                                 {4, "Four"}, {5, "Five"}, {6, "Six"},
                                                 {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int num : numbers) {
        result.push_back(std::string(numberNames[num]));
    }

    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}