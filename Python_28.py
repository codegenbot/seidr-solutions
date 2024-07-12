from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings_list = []
for i in range(5):  
    strings_list.append(input(f"Enter string {i+1}: "))
result = concatenate([s.strip() for s in strings_list])

print(result)