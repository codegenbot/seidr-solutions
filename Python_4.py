from typing import List


def main():
    while True:
        try:
            user_input = input("Enter a list of numbers separated by space: ")
            numbers = [float(num) for num in user_input.split()]

            # Check if all inputs can be converted to float
            if any(not isinstance(n, (int, float)) for n in numbers):
                print("Invalid input. Please enter some valid numbers.")
            elif len([num for num in numbers if isinstance(num, (int, float))]) < 2:
                print("Please enter at least two valid numbers.")
            else:
                print(mean_absolute_deviation(numbers))
                break
        except ValueError as e:
            print(f"Invalid input: {e}")


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)


main()