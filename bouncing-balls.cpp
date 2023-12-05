[PYTHON]
def bouncingBalls(startingHeight: float, firstBounceHeight: float, numBounces: int) -> float:
    bouncinessIndex = firstBounceHeight / startingHeight
    return (1 + bouncinessIndex) * (numBounces - 1) + bouncinessIndex
[/PYTHON]
[TESTS]
# Test case 1:
startingHeight = 10.0
firstBounceHeight = 9.5
numBounces = 3
assert bouncingBalls(startingHeight, firstBounceHeight, numBounces) == 28.75
# Test case 2:
startingHeight = 5.0
firstBounceHeight = 4.5
numBounces = 2
assert bouncingBalls(startingHeight, firstBounceHeight, numBounces) == 13.5
# Test case 3:
startingHeight = 100.0
firstBounceHeight = 90.0
numBounces = 10
assert bouncingBalls(startingHeight, firstBounceHeight, numBounces) == 980.0
[/TESTS]
