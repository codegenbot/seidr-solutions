def filter_by_substring() -> List[str]:
    strings = input().split()
    substring = input()
    return [s for s in strings if substring in s]