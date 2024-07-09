int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;
    
    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / static_cast<double>(startHeight);

    std::cout << std::fixed << std::setprecision(2);
    for (int i = 0; i <= numBounces; ++i) {
        startHeight = firstBounce;
        firstBounce *= 0.5;
        std::cout << static_cast<double>(startHeight + firstBounce) << " ";
    }
    return 0;
}