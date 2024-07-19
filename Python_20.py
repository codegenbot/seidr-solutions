def find_closest_elements(numbers):
    min_diff = float('inf')
    result = ()
    numbers.sort()
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

if __name__ == "__main__":
    numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))
    closest_pair = find_closest_elements(numbers)
    print(closest_pair[0], closest_pair[1])