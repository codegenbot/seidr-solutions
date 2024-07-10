def check_numbers(numbers, threshold):
    count = 0
    for num in numbers:
        if int(num) > threshold:
            count += 1
    return count

numbers = input("Enter numbers separated by a space: ").split()
threshold = int(input("Enter the threshold: ")

output = check_numbers(numbers, threshold)