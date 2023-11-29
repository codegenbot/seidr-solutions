import sys

def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

strings = list(map(str, sys.stdin.readline().strip().split()))
substring = str(input().strip())
result = filter_by_substring(strings, substring)
print(result)