```
int main() {
    double startHeight, firstBounce, numBounces;

    cin >> startHeight >> firstBounce >> numBounces;  

    double bouncinessIndex = (startHeight / firstBounce);

    double totalDistance = 1 - pow((1 - bouncinessIndex), numBounces);
    
    cout << fixed << setprecision(10) << totalDistance << endl;

    return 0;
}