try:
    strings = []
    num_strings = int(input())
    for _ in range(num_strings):
        strings.append(input())

    strings.sort()
    print(" ".join(strings))
except ValueError:
    print("Invalid input. Please provide the input in the correct format.")