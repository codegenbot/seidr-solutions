Solve the following code contest problem: fuel-cost. Problem description: Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector..
Currently, the code is 
```
def fuel_cost(vec):
    return sum((x - 2) // 3 for x in vec)
``` 
Modify the code as  The issue is that your code is rounding down to the nearest integer instead of rounding towards zero (i.e., removing any fractional part). To fix this, you can use the `math.floor()` function to round each element in the vector down to the nearest integer before subtracting 2. Here's an updated version of your code that should work correctly:
```
def fuel_cost(vec):
    return sum((math.floor(x / 3) - 2) for x in vec)
```.