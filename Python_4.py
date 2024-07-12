from typing import List

def mean_absolute_deviation():
    numbers = input("Enter a series of space-separated numbers: ").split()
    try:
        numbers = [float(num) for num in numbers]
        if not numbers or len(numbers) == 0 or any(x <= 0 for x in numbers):
            return None  
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except ZeroDivisionError:
        return None  
    except TypeError:
        return None

print(mean_absolute_deviation())