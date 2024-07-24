def check_numbers(numbers, threshold):
    count = 0
    for number in numbers:
        if int(number) > threshold:
            count += 1
    return count

numbers = input().strip().split()
threshold = int(input())
result = check_numbers(numbers, threshold)