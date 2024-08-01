def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += 'c' if char.isupper() else 'c'
            elif char.lower() == 'e':
                result += 'g' if char.isupper() else 'g'
            elif char.lower() == 'i':
                result += 'k' if char.isupper() else 'k'
            elif char.lower() == 'o':
                result += 'q' if char.isupper() else 'q'
            elif char.lower() == 'u':
                result += 'w' if char.isupper() else 'w'
            elif char.lower() in 'aeiou':
                continue
            else:
                result += 'T' if char.islower() and not char.isdigit() else 't' if char.lower() == 't' else 'T'
        else:
            result += char
    return result