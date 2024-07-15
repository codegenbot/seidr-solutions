def filter_numbers(numbers, threshold):
    result = [num for num in numbers if num > threshold]
    return result

numbers = list(map(int, input().strip().split()))
threshold = int(input("Enter the threshold: "))

for num in filter_numbers(numbers, threshold):
    print(num)