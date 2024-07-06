#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        cout << "Error: Empty vector" << endl;
        return {};
    }
    int sum = 0;
    for (int i : array) {
        sum += i;
    }
    if (sum % 2 == 1)
        return array;
    else
        std::reverse(array.begin(), array.end());
    cout << "Error: Vector not found" << endl; 
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}) , {11, 14, 21, 23}));
}