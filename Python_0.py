from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

# Read input from user
numbers = list(map(float, input().split()))
threshold = float(input())

# Call the function and print the result
print(has_close_elements(numbers, threshold))