def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.lower() == 'a':
                    result += 'c' if char.isupper() else 'c'
                elif char.lower() == 'e':
                    result += 'g' if char.isupper() else 'g'
                elif char.lower() == 'i':
                    result += 'k' if char.isupper() else 'k'
                elif char.lower() == 'o':
                    result += 'q' if char.isupper() else 'q'
                elif char.lower() == 'u':
                    result += 'y' if char.isupper() else 'y'
            else:
                result += 'TGSTHKSCKQYOZ'.index('TGSHKSCMGYY'[ord(char.upper())-65].lower())
        else:
            result += char
    return result