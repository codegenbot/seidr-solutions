def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = 0
    product = 1
    for num in numbers:
        sum_val += num
        product *= num
    return (sum_val, product)


numbers = [1, 2, 3, 4, 5]  # Example input, modify as per your requirements
result = sum_product(numbers)
print(result)