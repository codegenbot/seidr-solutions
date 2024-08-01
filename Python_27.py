def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)


def check(string):
    return swap_case(string)


# Fix the issue by passing the correct string to the function call
result = check("Hello, World!")
print(result)