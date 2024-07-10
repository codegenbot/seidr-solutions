if not numbers:
        return (0, 1)
    
    sum_total = sum(numbers)
    product_total = 1
    for num in numbers:
        product_total *= num
    
    return (sum_total, product_total)