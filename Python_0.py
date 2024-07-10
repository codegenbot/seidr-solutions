n = int(input())
numbers = [int(input()) for _ in range(n)]
threshold = int(input())

def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count

output = check_numbers(numbers, threshold)