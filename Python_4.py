from typing import List


def mean_absolute_deviation() -> float:
    numbers = input("Enter a series of space-separated numbers: ").split()
    if len(numbers) < 2:
        return None
    try:
        numbers = [
            float(num)
            for num in numbers
            if num != ""
            and all(char.isspace() or char.isdigit() or char == "." for char in num)
        ]
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except ZeroDivisionError:
        return None
    except TypeError:
        return None


print(mean_absolute_deviation())