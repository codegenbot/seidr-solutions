def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count


numbers = []
while True:
    try:
        num = input()
        if num == "STOP":
            break
        numbers.append(int(num))
    except:
        break

threshold = int(input())
output = check_numbers(numbers, threshold)
print(output)