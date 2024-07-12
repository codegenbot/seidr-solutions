def fix_spaces(text):
    while " " in text:
        text = text.replace(" ", "_")
    return text

text_to_fix = input("Enter a text to replace spaces with underscores: ")
print(fix_spaces(text_to_fix))