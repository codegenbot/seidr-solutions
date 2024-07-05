def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

input_data = input().split(',')
numbers = list(map(int, input_data[0].split()))
threshold = int(input_data[1])
print(check_threshold(numbers, threshold))