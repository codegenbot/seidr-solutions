def double_the_difference(lst):
    lst = [1, 2, 3, 4]  # define lst as an example list
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num**2
    return result