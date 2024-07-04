def decode_cyclic(s: str) -> str:
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

if __name__ == "__main__":
    try:
        input_str = input().strip()
        if input_str:
            print(decode_cyclic(input_str))
        else:
            print("")
    except Exception as e:
        print("")