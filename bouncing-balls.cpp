```cpp
int main() {
    double startHeight, actualStartHeight;

    // Get the input values from user
    std::cin >> startHeight >> actualStartHeight;
    
    double actualBouncinessIndex = (actualStartHeight / startHeight);

    double totalDistance = 0.0; 
    int bounces = 8; 

    for (int i = 1; i <= bounces; ++i) {
        startHeight *= 0.5; 
        totalDistance += startHeight; 
    }

    return 0;
}