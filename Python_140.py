def fix_spaces(text):
    return text.replace(' ', '_')

text = input("Enter some text: ")
result = fix_spaces(text)
print(result)