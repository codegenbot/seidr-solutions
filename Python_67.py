```
import re

def print_result():
    while True:
        s = input("Enter quantity of apples and/or oranges (e.g., 2 apples or 3 oranges): ")
        if re.search(r"(\d+)\s*(apples|oranges)", s.lower()):
            break
        else:
            print("Invalid input. Please enter a valid quantity of apples and/or oranges.")

    parts = re.split(r"\bor\b", s.lower())
    count_apples = 0
    count_oranges = 0

    for part in parts:
        if "apples" in part:
            count_apples += int(re.search(r"(\d+)", part).group(1))
        elif "oranges" in part:
            count_oranges += int(re.search(r"(\d+)", part).group(1))

    print(f"Apples: {count_apples}")
    print(f"Oranges: {count_oranges}")

if __name__ == "__main__":
    print_result()