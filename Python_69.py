def check(max_num, min_num):
    if max_num == min_num:
        print("Max and Min are equal")
    else:
        print(f"Max is {max_num} and Min is {min_num}")

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

your_list = [1, 2, 3, 4, 5]
max_num, min_num = find_max_min(your_list)
check(max_num, min_num)