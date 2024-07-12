for (int i = 0; i <= cutIndex; ++i) {
    std::cout << nums[i] << (i < cutIndex ? " " : "") ;
}
std::cout << std::endl;

if (cutIndex != n - 1) {
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << nums[i] << (i < n - 1 ? " " : "");
    }
    std::cout << std::endl;
}