print("Enter space-separated strings:")
strings = raw_input().split()
strings.sort(reverse=True)
print("".join(strings))