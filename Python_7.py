def filter_strings(strings, substring):
    return [s for s in strings if substring in s]


strings = []
while True:
    user_input = input()
    if user_input == "":
        break
    strings.append(user_input)

substring = input().strip()

filtered_strings = filter_strings(strings, substring)
print(str(filtered_strings))