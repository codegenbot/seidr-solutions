strings = input("Enter space-separated strings: ").split()
strings.sort(reverse=True)
print("".join(strings))