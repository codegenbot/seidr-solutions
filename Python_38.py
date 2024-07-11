def decode_cyclic(s: str):
    n = len(s)
    for i in range(1 << (n * 2)):
        temp = s + s
        if i > 0:
            temp = temp[i % (n*2):] + temp[:i % (n*2)]
        decoded_str = ""
        j = 0
        while j < n:
            decoded_str += str(temp[j]) * int(temp[j+n])
            j += 1
        if len(s) == len(decoded_str):
            return decoded_str
    return "No valid cyclic string found"