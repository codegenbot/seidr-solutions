int main() {
    string line;
    getline(cin, line);
    int startHeight, firstBounce, numBounces;
    istringstream iss(line);
    iss >> startHeight >> firstBounce >> numBounces; 

    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (2 * pow(2, i+1) - 1) * bouncinessIndex * 4;
    }

    cout << fixed;
    cout.precision(10);
    cout << totalDistance << endl;

    return 0;
}