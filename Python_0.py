try:
    numbers = list(map(int, input().split()))
    threshold = int(input())
except ValueError:
    print(
        "Input format is incorrect. Please provide space-separated integers followed by the threshold integer on a new line."
    )
    exit()


def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


result = check_threshold(numbers, threshold)

print(result)