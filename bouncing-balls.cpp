```c++
int main() {
    int numBounces;
    double startHeight;
    cout << "Enter number of bounces: ";
    cin >> numBounces;
    cout << "Enter starting height: ";
    cin >> startHeight;
    
    double bouncinessIndex;
    if (startHeight > 0) {
        bouncinessIndex = startHeight / pow(2, 1.5);
    } else {
        bouncinessIndex = 0.5;
    }
    
    double totalDistance = 0.0;
    for (int b = 0; b < numBounces; ++b) {
        double distance = pow(2, -b * bouncinessIndex) * startHeight;
        totalDistance += distance;
    }
    
    cout << "Total distance: " << totalDistance << endl;
    
    return 0;
}