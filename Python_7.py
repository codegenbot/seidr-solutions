def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


strings = input("Enter strings separated by space: ").split()
substring = input("Enter substring: ")
result = filter_by_substring(strings, substring)
print(result)