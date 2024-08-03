def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

def check(find_unique_numbers):
    numbers = list(map(int, input().split()))
    result = find_unique_numbers(numbers)
    for num in result:
        print(num, end=" ")

check(find_unique_numbers)