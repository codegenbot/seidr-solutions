def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers or len(numbers) == 0 or any(x <= 0 for x in numbers):
        return None  
    try:
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except ZeroDivisionError:
        return None  
    except TypeError:
        return None