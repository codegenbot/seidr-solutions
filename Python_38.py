def decode_cyclic(s):
    cyclic_map = {
        "abc": "1",
        "edf": "2",
        "ghi": "3",
        "jkl": "4",
        "mno": "5",
        "pqrs": "6",
        "tuvw": "7",
        "xyz": "8",
        "9#A": "B",
        "2*C": "D",
    }
    result = ""

    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]

        if len(group) == 3 and group in cyclic_map:
            result += cyclic_map[group]
        elif group[0:1] in cyclic_map or group[0:2] in cyclic_map:
            result += cyclic_map.get(group[0:1], group[0:1]) + cyclic_map.get(group[0:2], group[0:2])
        else:
            result += group

        i += 3

    return result


print(decode_cyclic(input("Enter a string: ")))