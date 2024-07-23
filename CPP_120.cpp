int main()
{
    if(issame({1, 2, 3, -23, 243, -400, 0}, std::vector<int>())) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }
    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int maximum(const std::vector<int>& vec, int index) {
    return vec[index];
}