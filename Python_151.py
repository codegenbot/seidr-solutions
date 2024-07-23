def double_the_difference(n):
    if len([i for i in n if isinstance(i, int)]) != 1:
        return "Input should have exactly one integer"
    else:
        num = [i for i in n if isinstance(i, int)][0]
        return abs((sum(i**2 for i in n) - (num**2)) // 2)