```
for prev_char in text:
    if prev_char.isspace():
        result += '-' if prev_was_space else '_'
    else:
        result += prev_char
    prev_was_space = prev_char.isspace()