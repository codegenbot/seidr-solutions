def double_the_difference(lst):
    total = 0
    first_list = lst[0]
    second_list = lst[1]
    
    for num in first_list:
        if isinstance(num, int) and num >= 0:
            total += num**2
    
    return abs(total - sum(second_list)) // len(second_list) * 2