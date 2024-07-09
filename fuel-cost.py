```
def fuel_cost(vector):
    """Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector."""
    return sum((i//3)-2 for i in vector)