import sys

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
start = int(input().strip())
end = int(input().strip())
strings = input().strip().split()
substring = input().strip()
return [string for string in strings if substring in string]

strings = []
print(filter_by_substring(strings))