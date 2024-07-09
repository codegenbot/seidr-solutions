int startHeight;
int firstBounce;
int numBounces;

std::cin >> startHeight; 
std::cin >> firstBounce;
std::cin >> numBounces;

double bouncinessIndex = static_cast<double>(firstBounce) / startHeight;

double totalDistance = 2.0 * (static_cast<double>(firstBounce) + startHeight); // initial bounce
for (int i = 1; i < numBounces; ++i) {
    totalDistance += 2.0 * startHeight; 
    startHeight *= bouncinessIndex; 
}

std::cout << "The total distance traveled by the ball is: " << static_cast<int>(totalDistance) << std::endl;

return 0;