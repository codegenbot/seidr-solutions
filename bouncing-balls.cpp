for (int i = 1; i <= numBounces; ++i) {
    double height = pow((1 + bouncinessIndex), i) * startHeight;
    totalDistance += height - (height / pow(2, i));
}