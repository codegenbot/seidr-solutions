"""
Trips per gallon: Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector.

    """
def fuel_cost():
    arr = list(map(int, input("Enter space-separated positive integers: ").split()))
    return sum(((n-2)//3) for n in arr)