from typing import List, Tuple

def find_closest_elements():
    numbers = input("Enter a list of numbers separated by space: ").split()
    try:
        numbers = [float(num) for num in numbers]
    except ValueError:
        print("Invalid input. Please enter only float values.")
        return
    
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

print(find_closest_elements())