def filter_by_substring() -> list:
strings = input().split()
substring = input()
return [s for s in strings if substring in s]