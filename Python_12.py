def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))


user_input = input("Enter a list of strings separated by spaces: ").split()
result = longest(user_input)
print(result)