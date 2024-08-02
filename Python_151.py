def check(lst):
    result = double_the_difference(lst)
    if result > 0 and len(lst) >= 2:
        return result * 2
    else:
        return "Invalid input"