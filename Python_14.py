from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(1, len(string) + 1):
        result.append(string[:i])
    return result


input_string = input("Please enter a string: ")
result = all_prefixes(input_string)
print(result)