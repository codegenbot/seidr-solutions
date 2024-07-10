def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == "x":
            if i + 2 >= len(s):
                return "Invalid input"
            j = i + 1
            while j < len(s) and s[j] != "x":
                j += 1
            if j - i > 3:
                return "Invalid input"
            char_val = int(s[i + 2 : j]) + ord("a")
            result += chr(char_val % 128)
            i = j
        else:
            result += s[i]
            i += 1
    return result