def decode_cyclic(s):
    while '<<<' in s:
        s = s.replace('<<<', '')
    return s

if __name__ == "__main__":
    s = "<<<" + input()
    print(decode_cyclic(s).replace(",,", ","))