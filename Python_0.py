```
def has_close_elements(numbers: List[float], threshold: float) -> bool:
    if len(numbers) < 2:
        return True
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return False
    return True

numbers = list(map(float, input("Enter the numbers separated by space: ").split()))
threshold = float(input("Enter the threshold: "))
print(has_close_elements(numbers, threshold))