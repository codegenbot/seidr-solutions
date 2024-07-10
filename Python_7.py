substring = input().strip()
strings = []


def filter_strings(strings, substring):
    return [string for string in strings if substring in string]


while True:
    string = input().strip()
    if string == "----":
        break
    strings.append(string)

filtered_strings = filter_strings(strings, substring)
print("\n".join(filtered_strings))