from typing import List


def main():
    try:
        user_input = input("Enter a list of numbers separated by space: ")
        numbers = [float(num) for num in user_input.split()]
        if len(numbers) == 0:
            print("Invalid input. Please enter some numbers.")
        elif all(-100 <= num <= 100 for num in numbers):
            print(mean_absolute_deviation(numbers))
        else:
            print("Invalid input. All numbers must be between -100 and 100.")
    except ValueError as e:
        print(f"Invalid input: {e}")


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)


main()