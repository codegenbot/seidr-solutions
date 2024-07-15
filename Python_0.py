numbers = list(map(int, input("Enter numbers separated by space: ").split()))
threshold = int(input("Enter the threshold value: "))

def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

result = check_threshold(numbers, threshold)
print(result)