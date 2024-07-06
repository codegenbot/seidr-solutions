def words_string(s):
    words = re.split(r"\s+", s)
    if len(words) == 1:
        return "The string contains one word."
    else:
        return f"The string contains {len(words)} words."

# Prompt the user for input and store it in a variable
inp = input("Enter a string: ")

# Call the function with the user's input as an argument
print(words_string(inp))