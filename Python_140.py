```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " " and new_text[-1:] == " ":
            new_text += "-"
        elif char == " ":
            new_text += "_"
        else:
            new_text += char
    return new_text

text = input("Enter your text: ")
if text.strip():
    print(fix_spaces(text))
else:
    print("Program did not receive expected input")