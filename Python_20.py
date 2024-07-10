```
import math

def find_closest_elements(numbers):
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

if __name__ == "__main__":
    while True:
        try:
            numbers = input("Enter a series of space-separated numbers: ").split()
            numbers = [float(x) for x in numbers if x.replace('.', '', 1).replace('-', '', 1).isdigit()]
            if not numbers:
                print("No numbers entered. Please enter some.")
                continue
            break
        except ValueError as e:
            print("Invalid input. Please enter only numeric values.")
    result = find_closest_elements(numbers)
    print(result)