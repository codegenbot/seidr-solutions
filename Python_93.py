```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                continue
            shift = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'w'}.get(char.lower())
            result += shift if char.isupper() else shift.lower()
        else:
            result += char
    return result