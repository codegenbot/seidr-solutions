def check_threshold(numbers, threshold):
    return [num for num in numbers if num > threshold]


numbers = list(map(int, input("Enter a list of numbers separated by space: ").split()))
threshold = int(input("Enter the threshold value: "))

result = check_threshold(numbers, threshold)