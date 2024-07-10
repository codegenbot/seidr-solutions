string = input("Enter a string: ").strip()
result = "".join([char.lower() if char.isupper() else char.upper() for char in string])
print(result)