```
def fix_spaces(text):
    import re
    return re.sub(r"\s+", "_", text, count=1)

user_input = input("Enter some text: ")
fixed_text = fix_spaces(user_input)
print(f"Fixed text: {fixed_text}")
```