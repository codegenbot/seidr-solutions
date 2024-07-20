int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounceHeight;
    cin >> firstBounceHeight;
    double bouncinessIndex = firstBounceHeight / startHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double height = pow((1 + bouncinessIndex), i) * startHeight;
        double distance = 1 - pow((1 - bouncinessIndex), i);
        totalDistance += startHeight * distance;
    }
    
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;
    
    return 0;
}