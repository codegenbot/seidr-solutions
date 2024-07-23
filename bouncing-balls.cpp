int main() {
    double startHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startHeight;
    std::cout << "Enter height after first bounce: ";
    std::cin >> firstBounceHeight;

    bouncinessIndex = firstBounceHeight / startHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    double totalDistance = 2 * startHeight + (numBounces - 1) * 2 * firstBounceHeight;
    totalDistance *= bouncinessIndex;

    std::cout << "Total distance the ball travels: " << totalDistance << std::endl;

    return 0;
}