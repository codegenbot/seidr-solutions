from typing import Tuple


def find_closest_elements() -> Tuple[float, float]:
    while True:
        user_input = input("Enter two space-separated numbers: ")
        try:
            numbers = [float(num) for num in user_input.split()]
            if len(numbers) != 2:
                print("Please enter exactly two numbers.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter only two numbers separated by spaces.")

    return tuple(sorted(numbers))


print(find_closest_elements())