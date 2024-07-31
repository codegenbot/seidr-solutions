bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> input1 = {4, 5, 6};
    std::vector<int> input2 = {4, 5, 6};

    bool areSame = issame(input1, input2);

    return 0;
}