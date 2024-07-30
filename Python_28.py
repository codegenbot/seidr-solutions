try:
    n = int(input())
    strings = [input() for _ in range(n)]
    strings.sort()
    print(" ".join(strings))
except ValueError:
    print("Invalid input. Please provide the input in the correct format.")