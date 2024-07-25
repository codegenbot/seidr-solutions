def decode_shift(s: str):
    while True:
        result = ""
        for ch in s:
            if ch.isalpha():
                ascii_offset = ord("a") if ch.islower() else ord("A")
                result += chr(((ord(ch) - ascii_offset) % 26) + ascii_offset)
            else:
                result += ch
        if "end" not in result:
            return result
        s = result.replace("end", "")