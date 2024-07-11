def concatenate_strings(strings):
    return "".join(strings)

strings = input().rstrip().split(" ")
result = concatenate_strings(strings)
print(result)