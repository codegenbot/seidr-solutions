def filter_numbers(numbers, threshold):
    result = [num for num in numbers if num > threshold]
    return result

print("Enter a list of numbers separated by spaces:")
numbers = list(map(int, input().strip().split()))
threshold = int(input("Enter a threshold number: "))

for num in filter_numbers(numbers, threshold):
    print(num)