
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    # Initialize a variable to keep track of the sum.
    sum = 0
    # Iterate over the list.
    for index, item in enumerate(lst):
        # Check if the item is an odd number and if the index is even.
        if item % 2 == 1 and index % 2 == 0:
            # Add the number to the sum.
            sum += item
    return sum
    solution([30, 13, 24, 321]) ==>0
    """
