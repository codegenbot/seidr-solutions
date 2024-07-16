def fix_spaces():
    text = input().strip()
    text = "_".join(text.split())
    return text

result = fix_spaces()
print(result)