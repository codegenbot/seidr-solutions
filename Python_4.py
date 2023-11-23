from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

def main():
    numbers = list(map(float, input("Enter a list of numbers: ").split()))
    result = mean_absolute_deviation(numbers)
    print(result)

main()