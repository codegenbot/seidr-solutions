def filter_numbers(numbers, threshold):
    result = [num for num in numbers if num > threshold]
    return result

n = int(input("Enter the number of elements: "))
numbers = [int(input("Enter a number: ")) for _ in range(n)]
threshold = int(input("Enter the threshold: "))

for num in filter_numbers(numbers, threshold):
    print(num)