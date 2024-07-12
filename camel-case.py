words = input().split("-")
result = "".join([words[0]] + [word.capitalize() for word in words[1:]])
print(result)