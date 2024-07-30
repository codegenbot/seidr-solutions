try:
    n = int(input())
    strings = []
    for _ in range(n):
        strings.append(input())

    strings.sort()
    print(" ".join(strings))
except ValueError:
    print("Invalid input. Please provide the input in the correct format.")