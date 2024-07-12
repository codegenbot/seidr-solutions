```
from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings_list = []
for i in range(5):
    while True:
        strings_list.append(input(f"Enter string {i+1}: ").strip())
        if input_string := strings_list[-1].strip():
            break
result = concatenate([s for s in strings_list])

print(result)