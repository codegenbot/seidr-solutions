from typing import List


def decode_cyclic(strings: List[str]) -> List[str]:
    result = []
    for s in strings:
        groups = [
            s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)
        ]
        groups = [
            (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
        ]
        result.append("".join(groups))
    return result


n = int(input())
input_strings = []
for i in range(n):
    string = input()
    input_strings.append(string)

result = decode_cyclic(input_strings)

for r in result:
    print(r)