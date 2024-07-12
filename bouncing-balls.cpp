double startHeight, bouncinessIndex, numBounces;
double totalDistance = 0.0;

std::cout << "Enter the starting height: ";
std::cin >> startHeight;

std::cout << "Enter the bounciness index: ";
std::cin >> bouncinessIndex;

std::cout << "Enter the number of bounces: ";
std::cin >> numBounces;

for (int i = 0; i < numBounces; ++i) {
    double distance = pow(2, -i * bouncinessIndex) * startHeight;
    totalDistance += distance;
}

std::cout << "The total distance traveled by the ball is: " << totalDistance;