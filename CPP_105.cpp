#include <vector>
#include <string>

bool issame(std::vector<std::string> a);

std::vector<std::string> by_length(std::vector<int> arr);

bool issame(std::vector<std::string> a) {
    if(a.size()==0) return true;
    for(int i=1;i<a.size();i++){
        if(a[i-1].size()!=a[i].size()) return false;
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(std::to_string(num));
        }
    }

    sort(numbers.begin(), numbers.end());

    reverse(numbers.begin(), numbers.end());

    return numbers;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}