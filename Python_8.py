def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = 0
    product_val = 1
    
    for num in numbers:
        sum_val += num
        product_val *= num
    
    return (sum_val, product_val)