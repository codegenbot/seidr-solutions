int main() {
    double startHeight, bounceHeight, bouncinessIndex;
    int numBounces;
    
    cin >> startHeight >> bounceHeight >> numBounces;
    
    bouncinessIndex = bounceHeight / startHeight;
    
    double totalDistance = startHeight; // Initial drop
    
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * bounceHeight; // Up and down
        bounceHeight *= bouncinessIndex; // Update bounce height
    }
    
    cout << totalDistance << endl;
    
    return 0;
}