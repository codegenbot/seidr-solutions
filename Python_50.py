```
def decode_shift():
    while True:
        s = input("Enter an encoded string: ")
        try:
            shift = int(input("Enter the shift value: "))
        except ValueError:
            print("Invalid input. Please enter a valid integer for the shift value.")
            continue
        if len(s) > 0 and isinstance(shift, int):
            break
        else:
            print("Invalid input. Please try again.")
    
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            offset = ord('a') - ascii_offset  
            result += chr((ord(ch) - ascii_offset - (shift % 26)) % 26 + ascii_offset)
        else:
            result += ch
    return result