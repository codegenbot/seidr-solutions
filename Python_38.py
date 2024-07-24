```
import sys

def decode_cyclic():
    while True:
        s = input("Enter a string: ")
        if isinstance(s, str):
            break
        print("Invalid input. Please enter a string.")

    n = len(s)

    if n < 2:
        return f"Cyclically decoded string: {s}"

    for i in range(1, n // 2 + 1):
        rotated = s[i:] + s[:i]
        while rotated != s:
            s = rotated
            rotated = rotated[1:] + rotated[0] 
    return f"Cyclically decoded string: {s}"