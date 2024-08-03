def check(lst, result):
    if isinstance(lst[0], int) and len(lst) > 1:
        return "Input is valid"
    elif result == abs(sum(i for i in lst) - min(lst)) * 2:
        return "The double the difference of the list is correct"
    else:
        return "The double the difference of the list is incorrect"