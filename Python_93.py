def decodeMessage(keys, message):
    result = ""
    char_index = {}
    for key in keys:
        if key not in char_index:
            char_index[key] = chr((ord('a') - ord('a') + 1) % 26 + ord('a'))
        else:
            result += char_index[key]
    for char in message:
        if char != ' ': 
            if char.lower() not in char_index:
                char_index[char.lower()] = chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a')).upper()
            result += char_index[char.lower()].upper()
        else: 
            result += char