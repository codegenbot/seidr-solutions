numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))

def remove_duplicates(numbers):
    return [num for num in set(numbers) if numbers.count(num) == 1]

result = remove_duplicates(numbers)
print(result)