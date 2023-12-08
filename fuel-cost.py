Solve the following code contest problem: fuel-cost. Problem description: Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector..
Currently, the code is 
```
def fuel_cost(vector):
    return sum([max(int(i / 3) - 2, 0) for i in vector])
``` 
Modify the code as  The issue with your current solution is that you are using `max()` to calculate the rounded down value, which is not correct. Instead, you should use the built-in `round()` function to round each element of the vector down to the nearest integer before subtracting 2. Here's a corrected version of your code:
```
def fuel_cost(vector):
    return sum([round(i / 3) - 2 for i in vector])
```.