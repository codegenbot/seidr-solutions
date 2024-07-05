```
if __name__ == "__main__":
    s = "<<<" + input()
    print(decode_cyclic(s).replace(",,", ","))