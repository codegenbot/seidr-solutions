# Input numbers and threshold
numbers = list(map(int, input().split()))
threshold = int(input())


# Define the function
def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


# Call the function with appropriate arguments
result = check_numbers(numbers, threshold)