import sys

def remove_duplicates(numbers_list):
    return list(set(numbers_list))

numbers_list = list(map(int, sys.stdin.readline().strip().split()))
result = remove_duplicates(numbers_list)
print(result)