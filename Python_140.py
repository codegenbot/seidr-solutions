```
new_text = input("Enter some text: ")
print(f"{'' if re.match(r'^[a-zA-Z_]+$', new_text) else new_text.capitalize()}"