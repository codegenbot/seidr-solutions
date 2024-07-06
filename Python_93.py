```
def encodeMessage(message):
    char_index = {}
    encoded_message = ""
    for i in range(len(message)):
        if message[i].isalpha():
            if message[i].lower() not in char_index:
                char_index[message[i].lower()] = chr(
                    (ord("a") - ord(message[i].lower()) + 1) % 26 + ord("a")
                )
            encoded_message += char_index.get(message[i].lower(), message[i])
        else:
            encoded_message += message[i]
    return encoded_message

def decodeMessage(key, message):
    char_index = {}
    result = ""
    for key_char in key:
        if key_char.isalpha():
            if key_char.lower() not in char_index:
                char_index[key_char.lower()] = chr(
                    (ord("a") - ord(key_char.lower()) + 1) % 26 + ord("a")
                )
            if key_char.isupper():
                result += char_index[key_char.lower()].upper()
            else:
                result += char_index[key_char].lower()
        else:
            result += key_char
    return result

print(check(encodeMessage(decodeMessage("thequickbrownfoxjumpsoverthelazydog", "hello"))))