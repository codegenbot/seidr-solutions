import re

def fix_spaces(text):
    if not text or not isinstance(text, str):
        return 
    text = text.strip().replace("--", "-").replace("\n", "").replace(" ", "_")
    return re.sub(r'_{1,}', lambda m: f"_{m.group(0).strip('_')}", text)

try:
    text = input("Enter a string: ")
    
    if not isinstance(text, str):
        raise ValueError("Invalid Input. Please enter a valid string.")

    result = fix_spaces(text)
    print(result)

except ValueError as ve:
    print(f"Error: {ve}")