from typing import List


def main():
    try:
        user_input = input("Enter a list of numbers separated by space: ")
        numbers = [float(num) for num in user_input.split()]
        
        # Check if all inputs can be converted to float
        if any(not isinstance(n, (int, float)) for n in numbers):
            print("Invalid input. Please enter some valid numbers.")
        else:
            try:
                print(mean_absolute_deviation(numbers))
            except Exception as e:
                print(f"An error occurred: {e}")
    except ValueError as e:
        print(f"Invalid input: {e}")


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers")


main()