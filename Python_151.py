def calculate_difference(lst):
    first, second = lst
    total = 0
    for sublist in first:
        for num in sublist:
            if isinstance(num, int) and num >= 0:
                total += num**2
    return abs(total - sum(second)) // len(second) * 2


print(calculate_difference([first_list, second_list]))