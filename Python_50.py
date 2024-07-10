def decode_shift(s: str):
    while True:
        n = int(input("Enter the shift value (1-25): "))
        if 1 <= n <= 25:
            break
        print("Invalid input. Please enter a value between 1 and 25.")
    
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset - n) % 26) + ascii_offset)
        else:
            result += ch
    return result