import sys

def concatenate(strings: List[str]) -> str:
    return " ".join(strings)

if __name__ == "__main__":
    input = sys.stdin.read().splitlines()
    num_strings = int(input[0])
    input_strings = input[1].split(' ')[:num_strings]

    output = concatenate(input_strings)
    print(output.strip())