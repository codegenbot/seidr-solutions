def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    result += 'c'
                elif char.lower() == 'e':
                    result += 'g'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'o':
                    result += 'q'
                else:
                    result += 'u'
            elif char.isupper():  
                if char.lower() in 'aeiou':
                    result += 'c' if char.lower() == 'a' else 'g' if char.lower() == 'e' \
                        else 'k' if char.lower() == 'i' else 'q' if char.lower() == 'o' else 'u'
                else:
                    result += chr(ord(char) + 1).lower()
            else:  
                result += chr(ord(char) - 1).upper() if char.isupper() else chr(ord(char) + 1)
        else:
            result += char
    return result