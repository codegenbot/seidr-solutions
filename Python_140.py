def fix_spaces():
    text = input("Enter the text: ").strip()
    return text.replace(' ', '_')

result = fix_spaces()
print(result)