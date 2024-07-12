from typing import List

def mean_absolute_deviation():
    try:
        n = int(input("Enter the number of values: "))
        if n <= 0:
            return None
        numbers = input(f"Enter {n} space-separated numbers: ").split()
        numbers = [float(num) for num in numbers if num != '' and all(char.isspace() or char.isdigit() + '.'.join('0123456789-') for char in num)]
        if not numbers or len(numbers) == 0:
            return None  
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except (ValueError, ZeroDivisionError):
        return None

print(mean_absolute_deviation())