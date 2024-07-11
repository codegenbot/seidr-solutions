#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> incr_list(std::vector<int> l);

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l){
    std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}

int main() {
    // Your main function code here
    return 0;
}