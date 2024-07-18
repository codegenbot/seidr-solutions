from collections import Counter


def remove_duplicates(numbers):
    num_counts = Counter(numbers)
    return [num for num in numbers if num_counts[num] == 1]


numbers = list(map(int, input().split()))
output = remove_duplicates(numbers)
print(output)