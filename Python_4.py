from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    mad = sum(abs(x - mean) for x in numbers) / len(numbers)
    return mad

if __name__ == "__main__":
    try:
        numbers = list(map(float, input("Enter space-separated numbers: ").strip().split()))
        print(mean_absolute_deviation(numbers))
    except ValueError:
        print("Invalid input. Please enter space-separated numeric values.")