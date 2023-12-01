from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes

num_test_cases = int(input("Enter the number of test cases: "))

result = []
for _ in range(num_test_cases):
    input_string = input("Enter a string: ")
    result.append(all_prefixes(input_string))

print(result)