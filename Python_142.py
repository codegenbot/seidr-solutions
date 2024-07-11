```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and num >= 1:
            total_sum += num ** 2
        elif isinstance(num, str):
            if num.lower() == 'stop':
                break
            else:
                total_sum += ord(num[0].lower()) - 96
    return total_sum