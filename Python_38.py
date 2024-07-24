def decode_cyclic():
    while True:
        s = input("Enter a string: ")
        if isinstance(s, str):
            break
        print("Invalid input. Please enter a string.")

    n = len(s)

    result = set()
    for i in range(n):
        rotated = s[i:] + s[:i]
        while i < n and (rotated in result or s in result):
            i += 1
        if i < n:
            result.add(rotated)

    return min(result, key=len)


print(decode_cyclic())