def filter_numbers(numbers, threshold):
    result = [num for num in numbers if num > threshold]
    return result

n = int(input())
numbers = [int(input()) for _ in range(n)]
threshold = int(input())

for num in filter_numbers(numbers, threshold):
    print(num)