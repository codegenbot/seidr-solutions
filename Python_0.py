def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count

n = int(input())
numbers = [int(input()) for _ in range(n)]
threshold = int(input())

output = check_numbers(numbers, threshold)
print(output)