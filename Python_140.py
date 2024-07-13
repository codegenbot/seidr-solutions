```
text = ""
print("Enter your text: ", end='')
text = input().strip()
if ' ' in text:
    print(fix_spaces(text))
else:
    print(text)