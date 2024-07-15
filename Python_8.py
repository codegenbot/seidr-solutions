from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

# Accept input from the user
numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except EOFError:
        break

# Call the function with user input and print the result
print(sum_product(numbers))