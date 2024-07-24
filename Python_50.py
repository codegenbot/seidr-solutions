def decode_shift(s: str):
    s = s.lower()
    num_str, rest = s.split(' ', 1) if ' ' in s else ('', s)
    num = int(num_str)
    
    return "".join([chr(((ord(ch) - num - ord("a")) % 26) + ord("a")) for ch in rest])