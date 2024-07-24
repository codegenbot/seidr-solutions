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
        while s in [rotated[j:] + rotated[:j] for j in range(len(rotated))]:
            s = rotated
    return f"Cyclically decoded string: {s}"