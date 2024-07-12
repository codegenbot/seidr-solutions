def decode_cyclic():
    n = int(input("Enter the number of pairs: "))
    s = input(f"Enter the {n*2}-character cyclically-encoded string: ")
    result = ""
    for i in range(n):
        if i < n - 1:
            group = s[i * 2 + 1 : i * 2 + 3] + s[i * 2]
        else:
            group = s[n * 2 - 1 :] + s[: n * 2 - 1]
        result += group[0]
    return result