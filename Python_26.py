def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except:
        break

print(find_unique_numbers(numbers))