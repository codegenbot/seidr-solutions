int totalDistance = 0;
int numBounces;
double startingHeight;
double bouncinessIndex;

std::cout << "Enter number of bounces: ";
std::cin >> numBounces;

std::cout << "Enter starting height: ";
std::cin >> startingHeight;

std::cout << "Enter first bounce height: ";
std::cin >> double temp; // declare as double for precision
bouncinessIndex = (double)temp / startingHeight;

totalDistance = 0;
for(int i = 1; i <= numBounces; ++i) {
    totalDistance += 2 * (startingHeight * bouncinessIndex - startingHeight);
}

std::cout << "Total distance traveled: " << totalDistance << std::endl;