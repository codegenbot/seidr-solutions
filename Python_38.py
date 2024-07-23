def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i % 3 == 0:
            if i + 2 <= len(s):
                if s[i] == s[i + 1]:
                    result += s[i : i + 2]
                    i += 2
                else:
                    result += s[i:]
            else:
                result += s[i:]
        else:
            if i + 1 < len(s) and s[i] == s[i + 1][0]:
                count = (len(s) - i) // 2 + 1
                while count:
                    result += s[i]
                    count -= 1
                i += (len(s) - i) % 2 or 2
            else:
                result += s[i:]
        i += 1
    return result