substring = input()
strings = input().split()

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

result = filter_by_substring(strings, substring)
print(result)