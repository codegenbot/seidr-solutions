def check_threshold(numbers, threshold):
    return [num for num in numbers if num > threshold]


numbers = list(map(int, input("Enter numbers separated by space: ").split()))
threshold = int(input("Enter threshold: "))

result = check_threshold(numbers, threshold)