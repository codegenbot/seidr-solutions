Here is the solution:

def find_max_consecutive(lst):
    if len(set(lst)) == 1:
        return lst[0]
    max_count = 0
    current_num = None
    current_count = 0
    for num in sorted(lst):
        if num == current_num:
            current_count += 1
        else:
            current_num = num
            current_count = 1
        max_count = max(max_count, current_count)
    return max_count