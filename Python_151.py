def double_the_difference(lst, num): 
    return abs((max(lst) - min(lst)) - (sum(i**2 for i in lst) / len(lst))) * 2