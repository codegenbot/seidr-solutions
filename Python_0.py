def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


numbers = list(map(int, input("Enter the numbers: ").split()))
threshold = int(input("Enter the threshold: "))
print(check_threshold(numbers, threshold))