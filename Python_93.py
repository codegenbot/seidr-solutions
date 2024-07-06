```
def encodeMessage(keys, result):
    char_index = {}
    for key in keys:
        if key not in char_index:
            char_index[key] = chr((ord('a') - ord('a') + 1) % 26 + ord('a'))
        else:
            result += char_index[key]
    for i in range(len(result)):
        char = result[i]
        if char.isalpha():
            if char.lower() not in char_index:
                char_index[char.lower()] = chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a')).upper()
            if char.isupper():
                result = result[:i] + char_index[char.lower()].upper() + result[i+1:]
            else:
                result = result[:i] + char_index[char].lower() + result[i+1:]
        else: 
            result += char
    return result