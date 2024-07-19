def is_happy(s):
    s = s.lower()
    steps = 0
    seen = set()
    while len(s) > 1:
        if s in seen:
            return False
        seen.add(s)
        new_s = "".join(
            (
                str(int(c) + 1)
                if c.isdigit() and int(c) < 9
                else (
                    "0" or chr(ord(c) + 1)
                    if ord(c) <= 122 and c != "y" or ord(c) == 121
                    else "z" if c == "y" else chr(ord(c) - 26)
                )
            )
            for c in s
        )
        s = new_s
    return True

print(is_happy(s))