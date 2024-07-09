def check_threshold(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

numbers = [5, 10, 15, 20, 25]
threshold = 3
result = check_threshold(numbers, threshold)
print(result)  