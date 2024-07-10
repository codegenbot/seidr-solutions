def solve_task(lst): 
    total_sum = 0
    for item in lst: 
        if isinstance(item, list):
            sub_total = sum(sub_item**2 for sub_item in item) 
            if len(item) >= 3:
                total_sum += sub_total * 4 - 6 * sum(sub_item for sub_item in item)
            else: 
                total_sum += sub_total
        elif isinstance(item, int):
            if item < 0:
                total_sum += item**2
            elif item == 0: 
                total_sum = 0
            else: 
                total_sum += item**2 
    return total_sum