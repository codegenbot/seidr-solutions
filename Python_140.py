import re


def fix_spaces(text):
    if not text or not isinstance(text, str):
        return
    text = text.strip().replace("--", "-").replace("\n", "").replace(" ", "_")
    text = text.replace("_", "-") if "_" in text else text
    return re.sub(r"_{1,}", lambda m: f"-{m.group(0).strip('_')}-", text)


text = input("Enter a string: ")
if not text:
    print("Error: Please enter a valid string.")
else:
    try:
        result = fix_spaces(text)
        print(result)
    except ValueError as ve:
        print(f"Error: {ve}")