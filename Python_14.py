from typing import List


def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(1, len(string) + 1)]


if __name__ == '__main__':
    input_string = input()
    result = all_prefixes(input_string)
    print(result)