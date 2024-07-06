def sum_product(numbers: list[int]) -> tuple[int, int]:
    total_sum = 0
    total_product = 1
    
    for num in numbers:
        total_sum += num
        total_product *= num
        
    return (total_sum, total_product)