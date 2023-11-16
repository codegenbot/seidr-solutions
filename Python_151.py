
# import the following: 
# math module
from math import sqrt

# math module to get the square root
from math import ceil


def double_the_difference(lst):
    '''
    Input: A list of integers lst.
    Output: A list of integers as defined by the above computation.

    For testing purposes, the function returns a list of the same numbers
    given as input. However, the list should be modified to contain all
    integers that are the square root of another number in the list.

    Examples:
    double_the_difference([1, 3, 2, 0]) == [1, 3, 2]
    double_the_difference([-1, -2, 0]) == [-1, -2]
    double_the_difference([9, -2]) == [3, -2]
    double_the_difference([0]) == [0]
    If the input list is empty, return an empty list.
    '''

    # add your code here.
    # change the returned list to the correct list.
    return lst

#DO NOT CHANGE ANY CODE BELOW THIS LINE.

# print(double_the_difference([92.333, 3, 2.431, 0]))

lst = [1, 3, 2, 0]

for i in lst:
    if ceil(sqrt(i))**2 == i:
        print(i)
