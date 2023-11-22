def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = 0
    product = 1
    for num in numbers:
        sum_val += num
        product *= num
    return (sum_val, product)


numbers = [5, 8, 13, 21, 34]  # Modify the numbers as per your requirements
result = sum_product(numbers)
print(result)