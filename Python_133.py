

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
    # Create a list to store the squared values
    squares = []
    # for each item in the list, square the value and store it in the new list
    for item in lst:
        # square the value
        square = item ** 2
        # append the value to the list
        squares.append(square)
    # return the sum of the squares
    return sum(squares)

    """
