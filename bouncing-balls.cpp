
float bouncingBalls(float startingHeight, float firstBounceHeight, int numBounces) {
    float bouncinessIndex = firstBounceHeight / startingHeight;
    return (1 + bouncinessIndex) * (numBounces - 1) + bouncinessIndex;
}