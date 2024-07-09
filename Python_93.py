Here is the modified code for the given task description and function signature:

```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + 3) % 26 + 65).upper()
            else:
                result += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            result += char
    return result