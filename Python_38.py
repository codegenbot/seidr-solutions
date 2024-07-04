def decode_cyclic(s: str) -> str:
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    for i in range(len(groups)):
        if len(groups[i]) == 3:
            groups[i] = groups[i][-1] + groups[i][0] + groups[i][1]
    return "".join(groups)

if __name__ == "__main__":
    input_str = input().strip()
    print(decode_cyclic(input_str))