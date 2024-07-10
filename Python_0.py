def check_numbers(numbers, threshold):
    count = len([int(num) for num in numbers if int(num) > threshold])
    return count

numbers = [int(num) for num in input().split()]
threshold = int(input())

output = check_numbers(numbers, threshold)