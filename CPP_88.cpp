#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) {
        cout << "Error: Vector is empty" << endl; 
        return vector<int>();
    }
    int sum = 0;
    for (int i : array) {
        sum += i;
    }
    if (sum % 2 == 1)
        return array;
    else
        std::reverse(array.begin(), array.end());
}