```
f"{new_text.upper() if re.match("^[a-zA-Z_]+$", new_text) else new_text.capitalize()})"