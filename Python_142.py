```
total_sum = 0
for num in lst:
    if isinstance(num, (int, float)):
        total_sum += num ** 2
    else:
        raise TypeError("The list contains non-numeric values")
return total_sum