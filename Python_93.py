def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            shift_amount = 3 if char.lower() in vowels else 4
            encoded_char = chr((ord(char) - ord("A" if char.isupper() else "a") + shift_amount) % 26 + ord("A" if char.isupper() else "a"))
            encoded_message += encoded_char
        else:
            encoded_message += char

    return encoded_message
```