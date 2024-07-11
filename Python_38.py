```Python
s = input()

def decode_cyclic(s: str):
    cyclic_map = {"abc": "1", "edf": "2", "ghi": "3", "jkl": "4", "mno": "5",
                  "pqrs": "6", "tuvw": "7", "xyz": "8", "9#A": "B", "2*C": "D"}
    result = ""
    
    i = 0
    while i < len(s):
        if i + 2 <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]

        if len(group) >= 3 and group in cyclic_map:
            result += cyclic_map[group]
        elif len(group) == 2:
            if group[0] + group[1] in cyclic_map:
                result += cyclic_map[group[0]+group[1]]
            else:
                result += group
        elif len(group) == 1:
            result += group
        else:
            if group in cyclic_map:
                result += cyclic_map[group]
            else:
                result += group

        i += 3
    
    return result

print(decode_cyclic(s))