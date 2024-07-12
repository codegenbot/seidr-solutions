from typing import List, Tuple

def find_closest_elements() -> Tuple[float, float]:
    input_str = input("Enter numbers separated by space: ")
    
    if not input_str:
        print("Program did not receive any input.")
        return None
    
    try:
        numbers = [float(num) for num in input_str.split()]
    except ValueError:
        print("Program did not receive expected input. Please enter numbers separated by a space.")
        return None

    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

result = find_closest_elements()
print("Closest pair is: ", result)