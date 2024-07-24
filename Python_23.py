def longest_name(names: list) -> str:
    longest = max(names, key=len)
    return longest