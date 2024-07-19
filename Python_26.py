def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

n = int(input().strip())
numbers = list(map(int, input().strip().split()))[:n]
print(find_unique_numbers(numbers))