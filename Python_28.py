def concatenate_strings(strings):
    return "".join(strings)

strings = input().strip().split()
result = concatenate_strings(strings)
print(result)