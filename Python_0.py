def check_numbers_within_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) < threshold:
            return True
    return False

if __name__ == "__main__":
    numbers = [3, 5, 8, 2, 7]
    threshold = 2
    result = check_numbers_within_threshold(numbers, threshold)
    print(result)