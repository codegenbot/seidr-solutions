def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

numbers = list(map(int, input().split()))
unique_numbers = find_unique_numbers(numbers)
print(*unique_numbers)
