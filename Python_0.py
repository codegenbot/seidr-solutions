def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count

while True:
    try:
        n = int(input())
        break
    except ValueError:
        pass

numbers = []
for i in range(n):
    while True:
        try:
            num = int(input())
            numbers.append(num)
            break
        except ValueError:
            pass

while True:
    try:
        threshold = int(input())
        break
    except ValueError:
        pass

output = check_numbers(numbers, threshold)