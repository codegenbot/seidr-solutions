def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                encoded_message += 'c' if char.isupper() else 'c'
            elif char.lower() == 'e':
                encoded_message += 'g' if char.isupper() else 'g'
            elif char.lower() == 'i':
                encoded_message += 'k' if char.isupper() else 'k'
            elif char.lower() == 'o':
                encoded_message += 'q' if char.isupper() else 'q'
            elif char.lower() == 'u':
                encoded_message += 'w' if char.isupper() else 'w'
            elif char.islower():
                encoded_message += 't' if char.isalpha() else 't'
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message