```
strings = input("Please enter a list of strings (separated by any character): ").strip()
print(" ".join(map(lambda s: s.strip(), strings.split())))