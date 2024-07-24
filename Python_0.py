def check_numbers(numbers, threshold):
    count = 0
    for num in numbers:
        if num > threshold:
            count += 1
    return count

numbers = list(map(int, input().rstrip().split()))
threshold = int(input("Enter threshold value: "))
result = check_numbers(numbers, threshold)