```
def find_closest_elements():
    num_str = input("Enter a comma-separated list of numbers: ")
    numbers = [float(num) for num in num_str.split(",")]
    min_diff = float("inf")
    closest_pair = ()
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[j] - numbers[i])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])
    return closest_pair

print(find_closest_elements())