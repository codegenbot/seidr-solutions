def double_the_difference(lst):
    if len(lst) < 2:
        raise ValueError("The input list should have at least two elements")
    
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    product = lst[0] * lst[-1]
    
    return 2*abs(odd_sum - product)