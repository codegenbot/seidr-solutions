from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

n = int(input())
numbers = []
for _ in range(n):
    numbers.append(float(input()))
threshold = float(input())

result = has_close_elements(numbers, threshold)

print(result)