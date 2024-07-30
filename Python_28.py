print("Enter strings separated by spaces:")
strings = input().strip().split()
strings.sort()
print(" ".join(strings))