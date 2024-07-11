```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, list):  
            total_sum += sum([i ** 2 if i % 3 == 0 and i % 4 != 0 else i ** 3 for i in num])
        else:  
            if num % 3 == 0 and num % 4 != 0:
                total_sum += num ** 2
            elif num % 4 == 0 and num % 3 != 0:
                total_sum += num ** 3
    return total_sum