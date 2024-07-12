from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    else:
        return sum(numbers), 1 if 0 in numbers else eval("*".join(map(str, numbers)))

input_numbers = input("Enter numbers separated by spaces: ")
numbers = list(map(int, input_numbers.split()))

result = sum_product(numbers)
print(result)