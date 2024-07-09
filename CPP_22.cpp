#include <vector>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int i = std::any_cast<int>(value);
            result.push_back(i);
        }
    }
    return result;
}

int main() { 
    int num1, num2; 
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    std::vector<int> vector1 = {num1};
    std::vector<int> vector2 = {num2};

    if(issame(vector1, vector2)) {
        std::cout << "Vectors are same." << std::endl; 
    }
    else {
        std::cout << "Vectors are not same." << std::endl;
    }

    // Use your filter_integers function here
    std::vector<std::any> values = {1, 2.0, 3, 4.5};
    std::vector<int> filtered = filter_integers(values);
    for (const auto& value : filtered) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    
    return 0;
}