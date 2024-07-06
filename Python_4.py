```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)


def main():
    try:
        user_input = input("Enter a list of numbers separated by space: ")
        numbers = [float(num) for num in user_input.split()]
        if len(numbers) == 0:
            print("Invalid input. Please enter some numbers.")
        else:
            print(mean_absolute_deviation(numbers))
    except ValueError as e:
        print(f"Invalid input: {e}")


if __name__ == "__main__":
    main()
    print(mean_absolute_deviation([1, 2, 3, 4, 5]))