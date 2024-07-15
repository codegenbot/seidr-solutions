numbers = list(map(int, input().strip().split()))
threshold = int(input())

def filter_numbers(numbers, threshold):
    result = [num for num in numbers if num > threshold]
    return result

for num in filter_numbers(numbers, threshold):
    print(num)