def sum_and_product_of_digits(n: int) -> Tuple[int, int]:
    def digits_sum-product(num: int) -> Tuple[int, int]:
        total_sum = 0
        product = 1
        while num:
            digit = num % 10
            total_sum += digit
            product *= digit
            num //= 10
        return (total_sum, product)

    numbers = [int(x) for x in str(n)]
    if not all(isinstance(x, int) for x in numbers):
        return "Error: Input must be a positive integer"
    return digits_sum_product(n)