from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes


num_test_cases = int(input())
result = []

for _ in range(num_test_cases):
    input_string = input()
    result.append(all_prefixes(input_string))

print(result)