int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / static_cast<double>(startHeight);

    std::cout << std::fixed << std::setprecision(2);
    for (int i = 0; i <= numBounces; ++i) {
        int height = static_cast<int>(firstBounce * pow(0.5, i));
        firstBounce = height;
        std::cout << height << " ";
    }
    return 0;
}