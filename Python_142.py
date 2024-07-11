```Python
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, complex): 
            total_sum += num.real ** 2 + (num.imag ** 2) * 1j 
        else: 
            total_sum += num ** 2
    return total_sum