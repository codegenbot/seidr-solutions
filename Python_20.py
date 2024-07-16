input_numbers = []
try:
    while True:
        value = input().strip()
        if value == "":
            break
        input_numbers.append(float(value))
except EOFError:
    pass

def find_closest_elements(numbers):
    sorted_numbers = sorted(numbers)
    min_diff = float('inf')
    closest_pair = ()
    for i in range(len(sorted_numbers) - 1):
        diff = abs(sorted_numbers[i] - sorted_numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (sorted_numbers[i], sorted_numbers[i + 1])
    return closest_pair

output = find_closest_elements(input_numbers)
print("{:.2f} {:.2f}".format(output[0], output[1]) )