def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

def check(s, word):
    return swap_case(s).count(swap_case(word))

# Example usage:
result = check("Hello World!", "HeLLo")
print(result)