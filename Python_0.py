def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

num_cases = int(input())
for _ in range(num_cases):
    numbers = list(map(int, input().split()))
    threshold = int(input())
    print(check_threshold(numbers, threshold))