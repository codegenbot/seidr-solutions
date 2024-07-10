numbers = input("Enter a series of space-separated numbers: ").split()
numbers = list(map(float, [x for x in numbers if x.replace('.', '', 1).replace('-', '', 1).isdigit()]))
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

try:
    result = find_closest_elements(numbers)
except ValueError as e:
    print("Invalid input. Please enter only numeric values.")
else:
    print(result)