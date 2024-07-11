def decode_cyclic(s: str):
    result = ""
    for char in s:
        if len(result) % 3 == 0:
            result += char
        else:
            temp_group = result[-1]
            if temp_group[2] == char:
                result = temp_group[0] + temp_group[1] + result[-1]
            else:
                return "Invalid Cyclic String"