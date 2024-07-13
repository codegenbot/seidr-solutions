Here is the corrected code:

def find_max_min(lst):
    if not lst:
        return None, None
    max_num = min_num = lst[0]
    for num in lst:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num
    return max_num, min_num