from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers else 1 if 0 in numbers else eval("*".join(map(str, numbers))),
    )

# Take user input and convert it to a list of integers
numbers = list(map(int, input("Enter numbers separated by space: ").split()))

# Call the function with the input numbers
result = sum_product(numbers)
print(result)