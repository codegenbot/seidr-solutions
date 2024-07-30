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
    std::vector<int> operations = {1, -2, 3, -5, 2};
    if (below_zero(operations)) {
        std::cout << "Sum went below zero." << std::endl;
    } else {
        std::cout << "Sum stayed non-negative." << std::endl;
    }
    return 0;
}