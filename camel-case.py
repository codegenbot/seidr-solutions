words = input().split("-")
output = words[0] + "".join(word.capitalize() for word in words[1:])
print(output)