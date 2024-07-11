def find_max_min(lst):
    if len(lst) == 0:
        return "The list is empty"
    else:
        return str(min(lst)) + ' and ' + str(max(lst))