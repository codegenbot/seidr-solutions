```
def longest(strings: list[str]) -> Optional[int]:
    if not strings:
        return None
    return max(len(s) for s in strings)

strings = [input(f"Enter string{i+1}): " for i in range(int(input("How many strings do you have? ")))]
print(longest(strings))