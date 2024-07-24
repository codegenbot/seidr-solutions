from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

if __name__ == "__main__":
    numbers = [float(x) for x in input("Enter a list of numbers separated by spaces: ").split()]
    print(mean_absolute_deviation(numbers))