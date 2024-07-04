from collections import Counter

def unique_numbers(numbers):
    count = Counter(numbers)
    return [num for num in numbers if count[num] == 1]

numbers = [4, 5, 6, 7, 4, 5, 8]
print(unique_numbers(numbers))  # Output will be [6, 7, 8]