def choose_num(x, y):
    """This function takes two positive numbers x and y and returns the
    biggest even integer number that is in the range [x, y] inclusive. If
    there's no such number, then the function should return -1.

    For example:
    choose_num(12, 15) = 14
    # YOUR CODE HERE
    if x % 2 == 0:
        return x
    elif x % 2 == 1:
        if x + 1 <= y:
            return x + 1
        else:
            return -1
    else:
        return -1

print(choose_num(13, 12))
    choose_num(13, 12) = -1
    """
