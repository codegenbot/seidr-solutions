from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1 if len(numbers) == 0 else 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result


# Read input from the user
numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))

# Call the function with the input numbers
result = sum_product(numbers)
print(result)