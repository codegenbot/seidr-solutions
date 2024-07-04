def decode_cyclic(s: str) -> str:
    # Group the string into chunks of 3
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    # Rotate each group if its length is 3
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    # Join the groups to form the final decoded string
    return "".join(groups)


if __name__ == "__main__":
    import sys

    input_str = sys.stdin.read().strip()  # Ensure reading input fully and stripping
    if input_str:
        print(decode_cyclic(input_str))