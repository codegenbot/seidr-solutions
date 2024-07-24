def check_numbers(numbers, threshold):
    count = 0
    for number in numbers:
        if number > threshold:
            count += 1
    return count


numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
threshold = int(input("Enter threshold value: "))
result = check_numbers(numbers, threshold)