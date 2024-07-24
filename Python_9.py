from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

try:
    input_numbers = list(map(int, input("Enter numbers separated by space: ").split()))
except ValueError:
    print("Invalid input. Please enter valid integers separated by space.")
else:
    output = rolling_max(input_numbers)
    print(output)