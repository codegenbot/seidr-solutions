```
def decode_cyclic():
    while True:
        s = input("Enter a string: ")
        if isinstance(s, str):
            break
        print("Invalid input. Please enter a string.")

    n = len(s)

    if n < 2:
        return s

    result = set()
    for i in range(n):
        rotated = s[i:] + s[:i]
        while i < n and (rotated in result or s in result):
            i += 1
        if i < n:
            result.add(rotated)

    rotations = {s[i:] + s[:i] for i in range(n)}
    return min({k for k in rotations if k in result}, key=len)