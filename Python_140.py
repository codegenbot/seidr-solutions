def fix_spaces(text):
    return text.strip().replace("  ", " ").replace(" ", "_").replace("--", "-")

input_text = input("Enter your text: ")
print(fix_spaces(input_text))