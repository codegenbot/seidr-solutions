import sys

def parse_nested_parens(paren_string: str) -> List[int]:
    count = 0
    max_count = 0

    for i in range(len(paren_string)):
        if (
            paren_string[i] == "("
            and i + 1 < len(paren_string)
            and paren_string[i + 1] == ")"
        ):
            count += 1
            max_count = max(max_count, count)
        elif paren_string[i] == ")":
            count = 0

    return [max_count]

if len(sys.argv) < 2:
    print("Input missing. Please provide the input string as a command line argument.")
else:
    input_paren_string = sys.argv[1]
    result = parse_nested_parens(input_paren_string)
    print(result[0])