def decode_cyclic(s):
    s = s.replace("<<=", "")
    while "<<<" in s:
        s = s.replace("<<<", ",")
    return s.strip().split(",")[:-1]


if __name__ == "__main__":
    s = "<<<" + input()
    print(",".join(map(str, decode_cyclic(s).replace(",,", ","))))