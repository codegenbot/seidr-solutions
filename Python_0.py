def check_threshold(numbers, threshold):
    return [num for num in numbers if num > threshold]


print("Enter numbers separated by space:")
numbers = list(map(int, input().split()))
threshold = int(input("Enter threshold: "))

result = check_threshold(numbers, threshold)