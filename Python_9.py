from typing import List, Tuple

def rolling_max() -> List[int]:
    numbers = list(map(int, input().split()))
    max_numbers = []
    current_max = float("-inf")

    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)

    return max_numbers

# Call the function to get the rolling maximum numbers from user input
result = rolling_max()
print(result)