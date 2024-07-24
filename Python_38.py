```
def decode_cyclic():
    while True:
        s = input("Enter a string: ")
        if isinstance(s, str):
            break
        print("Invalid input. Please enter a string.")

    n = len(s)

    for i in range(1, n // 2 + 1):
        for j in range(n):
            rotated = s[j:] + s[:j]
            while s == rotated:
                if isinstance(rotated, str):
                    return f"Cyclically decoded string: {rotated}"
                else:
                    print("Invalid cyclic decoding possible.")
    print(f"Cyclically decoded string: {s}")