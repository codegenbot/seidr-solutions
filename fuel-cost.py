Solve the following code contest problem: fuel-cost. Problem description: Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector.
Currently, the code is
```
def fuel_cost(vector):
    return sum((x - 2) // 3 for x in vector)
```
Modify the code as The issue with your current implementation is that it is not correctly rounding down the result of dividing each element by 3. To fix this, you can use the `math.floor` function to round down the result of the division to the nearest integer before subtracting 2. Here's an updated version of your code:
```
import math

def fuel_cost(vector):
    return sum((math.floor(x / 3) - 2) for x in vector)
```.