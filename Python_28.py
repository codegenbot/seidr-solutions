from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings_list = []
while True:
    strings_list.append(input("Enter a string (or 'stop' to finish): "))
    if input("Do you want to continue? (yes/no) ").lower() != "yes":
        break
result = concatenate([s.strip() for s in strings_list])

print(result)