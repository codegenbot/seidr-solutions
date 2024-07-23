def basement(vector): 
    total = 0 
    min_index = None 
    for i, num in enumerate(vector):
        if total < 0 and min_index is None:
            min_index = i
        total += num
    return min_index