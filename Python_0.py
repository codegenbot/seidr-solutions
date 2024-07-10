from typing import list


def has_close_elements():
    numbers = input("Enter numbers (space separated): ").split()
    threshold = float(input("Enter threshold: "))

    try:
        numbers = [float(num) for num in numbers]
        return has_close_elements(list(map(float, numbers)), threshold)
    except ValueError as e:
        print(f"Error: {e}")
        return None