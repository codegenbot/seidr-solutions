def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

numbers = list(map(int, input("Enter the numbers separated by space: ").strip().split()))
print(find_unique_numbers(numbers))