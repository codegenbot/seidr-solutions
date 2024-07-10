def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count

numbers = list(map(int, input().split()))
threshold = int(input())

output = check_numbers(numbers, threshold)
print(output)