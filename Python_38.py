def decode_cyclic(s_list: list):
    decoded_strings = []

    for s in s_list:
        if len(s) % 3 != 0:
            s += " " * (3 - len(s) % 3)
        groups = [s[(3 * i) : (3 * (i + 1))] for i in range(len(s) // 3)]
        groups = [(group[-1] + group[:-1]) for group in groups]
        decoded_strings.append("".join(groups))

    return decoded_strings


strings = []
while True:
    s = input()
    if not s:
        break
    strings.append(s)

decoded_strings = decode_cyclic(strings)

for i, s in enumerate(decoded_strings):
    print(s)