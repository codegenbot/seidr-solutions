int main() {
    double startHeight;

    // Get the input values from user
    std::cin >> startHeight;
    
    double actualStartHeight = (startHeight / 2);

    double actualBouncinessIndex = (actualStartHeight / startHeight);
    int numBounces;

    // Get the number of bounces from the user
    std::cin >> numBounces;

    double totalDistance = actualStartHeight * ((pow(2, numBounces) - 1) / (1 - pow(0.5, numBounces)));

    return 0;
}