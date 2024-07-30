try:
    strings = []
    print("Enter the number of strings:")
    num_strings = int(input().strip())
    if num_strings <= 0:
        raise ValueError("Number of strings should be a positive integer.")
    for _ in range(num_strings):
        strings.append(input().rstrip())

    strings.sort()
    print(" ".join(strings))
except ValueError as e:
    print(e)