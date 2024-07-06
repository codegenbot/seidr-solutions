def fix_spaces(text):
    text = text.strip().replace(" +", " ").strip().replace("--", "-").replace(" ", "_")
    return text

text = input("Enter the text: ")
print(fix_spaces(text))