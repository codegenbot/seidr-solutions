def decode_cyclic(s: str):
    decoded = ""
    state = 0
    for char in s:
        if state == 0 and char == "(":
            state = 1
            decoded += "("
        elif state == 1 and char == ")":
            state = 0
            decoded += ")"
        else:
            if state == 0:
                decoded += ")" + char
                state = 1
            else:
                decoded += char
    return decoded