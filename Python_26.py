numbers = list(map(int, input().split()))


def remove_duplicates(numbers):
    return [num for num in numbers if numbers.count(num) == 1]


result = remove_duplicates(numbers)
print(result)