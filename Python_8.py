```
def sum_product(numbers: list) -> tuple:
    total_sum = 0
    product = 1
    
    for num in numbers:
        total_sum += num
        product *= num
    
    return total_sum, product