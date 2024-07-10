def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count

numbers = [int(input()) for _ in range(int(input()))]
threshold = int(input())

output = check_numbers(numbers, threshold)