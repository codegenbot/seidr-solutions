from typing import List

def has_close_elements() -> None:
    try:
        numbers = input("Enter a list of floats separated by spaces: ").split()
        threshold = float(input("Enter the threshold value: "))
        if not all(num.replace('.', '', 1).isdigit() for num in numbers):
            raise ValueError
        numbers = [float(num) for num in numbers]
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                if abs(numbers[i] - numbers[j]) <= threshold:
                    print(True)
                    return
        print(False)
    except ValueError:
        print("Invalid input. Please enter a list of floats.")