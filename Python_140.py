def fix_spaces(text):
    return text.replace(' ', '_')

text = input("Enter text: ")
result = fix_spaces(text)
print(result)