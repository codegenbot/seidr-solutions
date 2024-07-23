def main():
    numbers = []

    while True:
        user_input = input("Enter a number (or 'stop' to finish): ")

        if user_input.lower() == "stop":
            break

        numbers.append(float(user_input))

    print(find_closest_elements(list(map(str, numbers))))


def find_closest_elements(numbers):
    numbers = [float(num) for num in input("Enter space-separated numbers: ").split()]
    if len(numbers) < 2:
        return None
    numbers.sort()

    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(numbers[1] - numbers[0])

    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair