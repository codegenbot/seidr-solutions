```
def decode_cyclic(s):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == 'x':
            i += 2
        elif s[i].isalpha():
            char_val = int(s[i+1:]) + ord('a' if s[i].lower() == s[i] else 'A')
            result += chr((char_val) % 26)
            i += 2
        else:
            result += s[i]
            i += 1
    return result