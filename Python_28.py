def concatenate_strings(strings):
    return " ".join(strings)

strings = []
for _ in range(int(input())):
    strings.append(input())

print(concatenate_strings(strings))