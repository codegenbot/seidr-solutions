# Prompt the user and read input
s = input("Enter a string:").strip()

# Process the input
result = ""
for char in s:
    result += chr(ord(char) - 1)

# Display the result
print(result)