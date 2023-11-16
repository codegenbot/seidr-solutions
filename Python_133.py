

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
    
    return sum([int(i)**2 for i in lst])


if __name__ == "__main__":
    def check(func):
        assert func([-1, 1, 0]) == 2
        assert func([1, 2, 3]) == 14
        assert func([1, 4, 9]) == 98
        assert func([1, 3, 5, 7]) == 84
        assert func([1.4, 4.2, 0]) == 29
        assert func([-2.4, 1, 1]) == 6


    check(sum_squares)

    """
