from typing import List, Tuple

def find_closest_elements() -> Tuple[float, float]:
    while True:
        try:
            numbers = [float(num) for num in input("Enter space separated numbers: ").split()]
            break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")
            continue  # ask again

    if len(numbers) < 2:
        return None
    return tuple(min(pair) for pair in zip([numbers[0]], numbers + [numbers[0]])) 

print(find_closest_elements())