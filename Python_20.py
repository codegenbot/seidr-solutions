from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float("inf")
    closest_pair = ()
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[j] - numbers[i])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])
    return closest_pair

if __name__ == "__main__":
    user_input = input("Enter a list of float numbers separated by space: ")
    numbers = [float(num) for num in user_input.split()]
    result = find_closest_elements(numbers)
    print(f"The closest pair is {result}")