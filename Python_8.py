from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result


# Prompt user to input integers separated by spaces
try:
    numbers = list(map(int, input("Enter integers separated by spaces: ").split()))
except ValueError:
    print("Invalid input. Please provide valid integers separated by spaces.")
    exit()

# Call the function with user input and print the result
print(sum_product(numbers))