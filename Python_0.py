def check_numbers(numbers, threshold):
    count = len([num for num in numbers if int(num) > threshold])
    return count

numbers = [int(num) for num in input("Enter numbers separated by a space: ").split()]
threshold = int(input("Enter the threshold: "))

output = check_numbers(numbers, threshold)