def manipulate_string(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

# Call the function with input string
result = manipulate_string(input())
print(result)