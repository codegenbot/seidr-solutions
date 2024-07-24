import re


def print_result():
    while True:
        s = input(
            "Enter the number of apples and oranges in the following format: <quantity> apples/oranges, e.g., 5 apples or 10 oranges (or 'q' to quit): "
        )
        if s.lower() == "q":
            break

        pattern = r"(\d+)\s*(apples|oranges)"

        if not re.search(pattern, s.lower()):
            print("Invalid input format. Please try again.")
            continue

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