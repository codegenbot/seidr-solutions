def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            if len(temp) > 3:
                temp = temp[1:] + temp[0]
            while len(temp) < 3:
                if not result: 
                    temp += '0' # If this is the first group of three characters
                else:
                    temp += result[-1] # Append the last character of result to temp
            result += temp
            temp = ""
    return result + temp