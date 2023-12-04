Solve the following code contest problem: fuel-cost. Problem description: Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector..
Currently, the code is 
```
def fuel_cost(vec):
    return sum([(x//3)-2 for x in vec])
``` 
Modify the code as  
The issue is that the code is not rounding down to the nearest integer correctly. To fix this, you can use the `math.floor` function to round down each element of the vector before subtracting 2. Here's an updated version of the code:
```
import math

def fuel_cost(vec):
    return sum([math.floor((x/3))-2 for x in vec])
```.