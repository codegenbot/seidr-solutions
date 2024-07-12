strings = input("Enter the two strings separated by space: ").split()
print(max(strings, key=len))