```
def longest(strings: List[str]) -> Optional[int]:
    if not strings:
        return None
    return max(len(s) for s in strings)

strings = [input("Enter string{} (or press Enter when done): ".format(i+1)) for i in range(int(input("How many strings do you have? ")))]
print(longest(strings))