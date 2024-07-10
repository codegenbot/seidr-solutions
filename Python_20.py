```
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
    try:
        numbers = list(map(float, [x for x in (n.replace('.', '', 1).replace('-', '', 1) for n in input("Enter a series of space-separated numbers: ").split()) if x.isdigit() or (x[0] == '-' and len(x) > 1 and x[1:].isdigit())]))
        result = find_closest_elements(numbers)
    except ValueError as e:
        print("Invalid input. Please enter only numeric values.")
    else:
        print(result)