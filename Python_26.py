from collections import Counter

def remove_duplicates(numbers):
    return [num for num, count in Counter(numbers).items() if count == 1]

numbers = list(map(int, input().strip().split()))
print(remove_duplicates(numbers))