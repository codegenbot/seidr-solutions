def double_the_difference(lst): 
    return (max(lst) - min(lst)) / 2 if len([i for i in lst if isinstance(i, int)]) % 2 == 0 else max(lst) - min(lst)