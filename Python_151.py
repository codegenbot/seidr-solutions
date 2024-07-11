def double_the_difference():
    """
    This function calculates the double of the difference between the maximum and minimum numbers in a list.
    It takes a list and returns its doubled difference.
    :return: 
    """
    def inner(lst):
        lst.sort()
        return (lst[-1] - lst[0]) * 2
    return inner

print(check([1, 2, 3], double_the_difference()))