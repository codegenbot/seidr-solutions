from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        raise ValueError("List of numbers is empty")
    mean = sum(numbers) / len(numbers)
    mad = sum(abs(x - mean) for x in numbers) / len(numbers)
    return mad

if __name__ == "__main__":
    try:
        numbers = list(map(float, input("Enter numbers separated by spaces: ").strip().split()))
        if not numbers:
            raise ValueError("Input cannot be empty")
        print(mean_absolute_deviation(numbers))
    except ValueError as e:
        print(f"Invalid input: {e}")