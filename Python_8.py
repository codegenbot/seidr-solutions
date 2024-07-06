def sum_product(numbers: list) -> tuple:
    if not numbers:
        raise ValueError("Input list is empty")
    
    total_sum = 0
    product = 1
    
    for num in numbers:
        if not isinstance(num, (int, float)):
            raise ValueError("Input list should contain only numbers")
        total_sum += num
        product *= num
    
    return total_sum, product