bool below_zero(const std::vector<int>& operations) {
    int sum = 0;
    for (int op : operations) {
        sum += op;
        if (sum < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> operations = {1, 2, -3, 4, 5};
    if (below_zero(operations)) {
        std::cout << "Sum goes below zero." << std::endl;
    } else {
        std::cout << "Sum stays above or equal to zero." << std::endl;
    }
    return 0;
}