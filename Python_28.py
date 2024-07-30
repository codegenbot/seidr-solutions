try:
    num_strings = int(input())
    if num_strings < 1:
        raise ValueError("Please enter a positive integer for the number of strings.")
    strings = [input() for _ in range(num_strings)]

    strings.sort()
    print(*strings, sep="\n")
except ValueError as e:
    print(e)