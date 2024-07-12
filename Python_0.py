from typing import List


def has_close_elements():
    numbers = input("Enter numbers (space separated): ")
    threshold = float(input("Enter threshold: "))
    numbers = list(map(float, numbers.split()))
    
    if len(numbers) < 2:
        return False
    
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i + 1] - numbers[i]) <= threshold:
            return False
    return True


print(has_close_elements())