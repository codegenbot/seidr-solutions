def decode_cyclic(s: str) -> str:
    n = len(s)
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3 or (len(temp) > 3 and temp[0] == temp[-1]):
            result += temp[1:-1]
            temp = temp[0] + temp[-1]
    return result if n % 2 != 0 else "NO UNIQUE DECODE EXISTS"