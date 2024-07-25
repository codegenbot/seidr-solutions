```
def decode_shift():
    shift = int(input("Enter the shift value (0-25): "))
    if shift < 0 or shift > 25:
        return str(shift) + " is not a valid shift value. Please enter a shift value between 0 and 25."

    s = input("Enter the encoded string: ")
    
    result = ""
    i = 0
    while i < len(s):
        if s[i].isalpha():
            ascii_offset = ord("a") if s[i].islower() else ord("A")
            if i > 0 and s[i-1].isdigit():
                shift = int(s[i-1])
                i -= 1
            elif i > 0:
                shift = int(result[-1]) % 26
            else: 
                shift = -1
            if ((ord(s[i]) - ascii_offset - shift) % 26) <= 0:
                result += chr(((ord(s[i]) - ascii_offset - shift + 26) % 26) + ascii_offset)
            else:
                result += chr(((ord(s[i]) - ascii_offset - shift) % 26) + ascii_offset)
        else:
            result += s[i]
        i += 1
    return result