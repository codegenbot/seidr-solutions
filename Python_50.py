def decode_shift():
    shift = int(input("Enter your shift value: "))
    result = ""
    for ch in input("Enter a string: ").lower():
        if ch.isalpha():
            ascii_offset = ord("a") if ch.isalpha() and ch.islower() else ord("A")
            result += chr(((ord(ch) - ascii_offset - shift) % 26) + ascii_offset)
        else:
            result += ch
    print(result)