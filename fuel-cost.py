
def fuel_cost(vector):
    return sum([max(int(i / 3) - 2, 0) for i in vector])
```
The function `fuel_cost` takes a vector of positive integers and calculates the total cost of fuel required to travel the distance represented by each integer. The formula for calculating the fuel cost is:

* Divide each integer by 3
* Round the result down to the nearest integer
* Subtract 2 from the result

The function returns the sum of all the calculated fuel costs.