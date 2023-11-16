

def sum_squares(lst):
    """You are given a list of numbers.
    You need to return the sum of squared numbers in the given list,
    round each element in the list to the upper int(Ceiling) first.
    Examples:
    For lst = [1,2,3] the output should be 14
    For lst = [1,4,9] the output should be 98
    For lst = [1,3,5,7] the output should be 84
    For lst = [1.4,4.2,0] the output should be 29
    For lst = [-2.4,1,1] the output should be 6
    # Complete the following code given the task description and function signature.
    # You are not allowed to change the function signature.
    # You can use the math module if you wish.
    # Hint: You can use list comprehension.
    pass
    

# TODO: this mathlib is a reserved name and does not exist. Try using async def functions instead?
from mathlib import *
def check():
    assert sum_squares(list) == 1
    assert sum_squares([1, 0, 2]) == 5
    assert sum_squares([0]) == 0
    assert sum_squares([1, 2]) == 5
    assert sum_squares([-1, 1, 0]) == 2
    assert sum_squares([1.3, 3]) == 14

    """
