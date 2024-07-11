def find_max_min(lst):
    if not lst:
        return "The list is empty"
    else:
        return str(min(lst)) + ' and ' + str(max(lst))