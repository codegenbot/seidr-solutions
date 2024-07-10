from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0

    mean = sum(numbers) / len(numbers)
    
    if len(numbers) > 1:
        return sum(abs(n - mean) for n in numbers) / len(numbers)
    else:
        return 0


def main():
    user_input = input("Enter a list of numbers separated by space: ")
    try:
        numbers = [float(num) for num in user_input.split()]
        print(f"Mean absolute deviation: {mean_absolute_deviation(numbers)}")
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()