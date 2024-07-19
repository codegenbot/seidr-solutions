s = input("Enter a string: ")

def is_happy(s):
    s = s.lower()
    seen = set()
    while len(s) > 1:
        if any(c in seen for c in s):
            return False
        seen.add(''.join(sorted(s)))
        new_s = ""
        for c in s:
            if c.isdigit():
                new_s += str(int(c) + 1) if int(c) < 9 else "0"
            elif ord(c) <= 122:
                new_s += (chr(ord(c) + 1) if ord(c) < 122 else "z" if c == "y" else chr(ord(c) - 26))
            else:
                new_s += c
        s = new_s
    return True

print(is_happy(s))