substring = input().strip()
if not all(char.isalpha() or char.isspace() for char in substring):
    raise ValueError("Invalid input format for substring")

strings = []
while True:
    try:
        string = input().strip()
    except EOFError:
        break
    if string == "----":
        break
    strings.append(string)

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print("\n".join(filtered_strings))