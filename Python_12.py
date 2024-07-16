def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))


# Input
strings = input().split()

# Output
print(longest(strings))