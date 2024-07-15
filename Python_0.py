def filter_numbers(numbers, threshold):
    result = [num for num in numbers if num > threshold]
    return result

numbers = []
n = int(input())
for _ in range(n):
    numbers.append(int(input()))

threshold = int(input())

for num in filter_numbers(numbers, threshold):
    print(num)