try:
    strings = []
    num_strings = int(input("Enter the number of strings: "))
    for _ in range(num_strings):
        strings.append(input().rstrip())

    strings.sort()
    print(" ".join(strings))
except ValueError:
    print("Invalid input. Please provide the input in the correct format.")