print("Enter space-separated strings:")
strings = input().split()
strings.sort(reverse=True)
print("".join(strings))