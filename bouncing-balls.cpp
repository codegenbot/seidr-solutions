```cpp
int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / startHeight;

    for (int i = 0; i <= numBounces; ++i) {
        int height = static_cast<int>(startHeight * pow(0.5, i));
        std::cout << "Height at bounce " << i+1 << ": " << height << std::endl;
        startHeight = height;
    }

    double totalDistance = bouncinessIndex * (1 - pow(0.5, numBounces + 1));

    std::cout << "Total distance: " << totalDistance << std::endl;

    return 0;
}