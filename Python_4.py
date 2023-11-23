from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

def main(numbers_str: str):
    numbers = list(map(float, numbers_str.split()))
    result = mean_absolute_deviation(numbers)
    print(result)

numbers_str = input("Enter the numbers separated by space: ")
main(numbers_str)