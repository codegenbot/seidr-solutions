def check_numbers(numbers, threshold):
    count = 0
    for number in numbers:
        if int(number) > threshold:
            count += 1
    return count

numbers = input("Enter numbers separated by space: ").split()
threshold = int(input("Enter threshold value: "))
result = check_numbers(numbers, threshold)