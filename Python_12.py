def longest(strings: list[str]) -> str:
    return max(strings, key=lambda x: (len(x), x))

strings = input("Enter strings separated by spaces: ").split()
result = longest(strings)
print(result)