strings = []
for line in sys.stdin:
    strings.append(line.strip())

num_strings = int(strings[0])
if num_strings < 1:
    raise ValueError("Please enter a positive integer for the number of strings.")

sorted_strings = sorted(strings[1:])
print("".join(sorted_strings))