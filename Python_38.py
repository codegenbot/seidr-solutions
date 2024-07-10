```
def decode_cyclic(s: str):
    result = ""
    temp = ""
    is_next_x = False
    for char in s:
        if char == "x":
            if not is_next_x and temp:
                result += temp[::-1] + ("x" if not is_next_x else "")
                temp = ""
            is_next_x = not is_next_x
        else:
            temp += char
    if temp:
        result += temp[::-1] + ("x" if not is_next_x else "")
    return result.replace("xx", "x").replace("x", "")```