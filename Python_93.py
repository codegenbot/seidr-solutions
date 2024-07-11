def process_string(s):
    encoded_message = ""
    for char in s:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char.lower()) - ord('a')
                encoded_char = chr((index + 2) % 26 + ord('a'))
                if char.isupper():
                    encoded_message += encoded_char.upper()
                else:
                    encoded_message += encoded_char
            else:
                encoded_message += char.upper() if char.islower() else char
        else:
            encoded_message += char
    return encoded_message