import sys

try:
    lines = sys.stdin.readlines()
    num_strings = int(lines[0])
    if num_strings < 1:
        raise ValueError("Please enter a positive integer for the number of strings.")
    strings = lines[1:]  # Skip the first line which contains the integer input

    strings.sort()
    print(*strings, sep="")
except ValueError as e:
    print(e)