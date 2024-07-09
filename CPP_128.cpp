int main() {
    int result = 0;
    for (int num : { -1, 1, 1, 0 }) {
        if (num < 0) {
            result = -1;
            break;
        }
    }
    std::cout << result << std::endl;
}