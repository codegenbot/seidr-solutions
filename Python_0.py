print("Enter a list of numbers separated by space:")
numbers = list(map(int, input().split()))
print("Enter a threshold value:")
threshold = int(input())

def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

result = check_numbers(numbers, threshold)
print(result)