int main() {
	double startingHeight, bounceHeight, bouncinessIndex;
    int numBounces;
    
	cin >> startingHeight >> bounceHeight >> numBounces;
	bouncinessIndex = bounceHeight / startingHeight;
	double totalDistance = startingHeight + bounceHeight;
	for (int i = 1; i < numBounces; ++i) {
		totalDistance += bounceHeight * pow(bouncinessIndex, i);
	}
	cout << totalDistance << endl;
	
	return 0;
}