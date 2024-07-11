words = input().split("-")
result = words[0] + "".join(word.capitalize() for word in words[1:])
print(result)