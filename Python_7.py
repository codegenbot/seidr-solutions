def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]


strings = input("Enter the strings: ").split()
substring = input("Enter the substring: ").strip()
result = filter_by_substring(strings, substring)
print(result)