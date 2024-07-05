def decode_cyclic(s):
    s = s[3:]
    result = ""
    i = 0
    while len(s) > 0:
        if s[0] == 'r':
            if len(s) > 1 and s[1] != ',':
                return "Invalid sequence"
            result += s[:i]
            s = s[i+2:]
            i = 0
        else:
            i += 1
    return result

if __name__ == "__main__":
    s = "<<<" + input()
    print(decode_cyclic(s).replace(",,", ","))