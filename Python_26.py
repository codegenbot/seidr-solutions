from typing import List


def remove_duplicates():
    numbers = input("Enter space-separated integers: ")
    try:
        num_list = list(map(int, numbers.split()))
        return list(set(num_list))
    except ValueError:
        print("Invalid input. Please enter valid integers.")
        return []