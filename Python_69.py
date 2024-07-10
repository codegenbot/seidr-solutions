def find_max(lst):
    max_num = -1
    for num in lst:
        if num > 0 and (max_num < num or num % max_num != 0):
            max_num = num
    return max_num