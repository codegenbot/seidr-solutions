Here is the modified code:

# Calculate sum and product of numbers in a list. If the list is empty, return 0 for sum and 1 for product.

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total = 1
    product = 1
    for num in numbers:
        total += num
        product *= num
    return total, product