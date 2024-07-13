words = input().split()
camel_case_words = [words[0]] + [word.capitalize() for word in words[1:]]
print("".join(camel_case_words))