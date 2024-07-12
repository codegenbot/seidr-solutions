# Calculate the sum and product of digits in a phone number
def sum_product(digits: List[int]) -> Tuple[int, int]:
    if not digits:
        return 0, 1
    total = 1
    product = 1
    for digit in digits:
        total += digit
        product *= digit
    return total, product