strings = input("Enter a list of strings separated by spaces: ").split()
result = max(strings, key=len)
print(result)