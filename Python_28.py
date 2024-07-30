strings = input("Enter a space-separated list of strings: ").split()
strings.sort(reverse=True)
print("".join(strings))