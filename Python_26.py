print("Enter a list of numbers separated by spaces:")
numbers = list(map(int, input().split()))

def remove_duplicates(numbers):
    return sorted(list(set([num for num in numbers if numbers.count(num) == 1])))

result = remove_duplicates(numbers)
print(result)