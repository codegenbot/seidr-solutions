```
try:
    numbers = list(map(float, input("Enter a series of space-separated numbers: ").split()))
except ValueError:
    print("Invalid input. Please enter valid numbers separated by spaces.")
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