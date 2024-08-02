def check(lst):
    result = double_the_difference(lst)
    if result > 0:
        return result * 2
    else:
        return "Output should be positive!"