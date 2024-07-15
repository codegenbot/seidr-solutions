def check_threshold(numbers, threshold):
    return [num for num in numbers if num > threshold]

numbers = list(map(int, input().split()))
threshold = int(input())

result = check_threshold(numbers, threshold)