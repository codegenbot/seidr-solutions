import re


def print_result():
    while True:
        s = input()
        pattern = r"(\d+)\s*(apples|oranges)"

        if not re.search(pattern, s.lower()):
            continue

        break

    count_apples = 0
    count_oranges = 0
    for match in re.finditer(r"(\d+)\s*(apples|oranges)", s):
        quantity = int(match.group(1))
        fruit = match.group(2)
        if fruit == "apples":
            count_apples += quantity
        else:
            count_oranges += quantity

    print(f"Apples: {count_apples}")
    print(f"Oranges: {count_oranges}")


print_result()